#include <iostream>
#include <cstdio>
#include <cerrno>
#include <string>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

const std::string comm_path = "./myfifo";

#define Creater 1
#define User 2
#define DefaultFd -1

#define Read O_RDONLY
#define Write O_WRONLY

#define BaseSize 1024

class NamePiped
{
private:
    bool OpenNamedPipe(int mode)
    {
        _fd = open(_fifo_path.c_str(), mode);
        if (_fd < 0)
            return false;
        return true;
    }

public:

    // 构造创建管道
    NamePiped(const std::string &path, int who)
        : _fifo_path(path), _id(who), _fd(DefaultFd)
    {
        if (_id == Creater)
        {
            int res = mkfifo(_fifo_path.c_str(), 0666);
            if (res != 0)
                perror("mkfifo");
            std::cout << "creater create named pipe" << std::endl;
        }
    }

    // 读
    int ReadNamedPipe(std::string *out)
    {
        char buffer[BaseSize];
        int n = read(_fd, buffer, sizeof(buffer));
        if (n > 0)
        {
            buffer[n] = 0;
            *out = buffer;
        }
        return n;
    }

    // 写
    int WriteNamedPipe(std::string &in)
    {
        return write(_fd, in.c_str(), in.size());
    }

    // 读端打开管道
    bool OpenForRead()
    {
        return OpenNamedPipe(Read);
    }

    // 写端打开管道
    bool OpenForWrite()
    {
        return OpenNamedPipe(Write);
    }

    // 析构删除管道
    ~NamePiped()
    {
        if (_fd == Creater)
        {
            int res = unlink(comm_path.c_str());
            if (res != 0)
                perror("unlink");
            std::cout << "creater free named pipe" << std::endl;
        }
        if (_fd != DefaultFd)
            close(_fd);
    }

private:
    std::string _fifo_path;
    int _fd;
    int _id;
};