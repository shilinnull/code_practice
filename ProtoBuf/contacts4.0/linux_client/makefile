client:./*.cc ./request/*.cc ./response/*.cc
	g++ -o $@ $^ -std=c++11  -lpthread -lprotobuf 

.PHONY:clean
clean:
	rm -f client