package ioperations;

import book.Book;
import book.BookList;

public class ShowOperation implements IOPeration{
    @Override
    public void work(BookList bookList) {
        System.out.println("显示图书");
        for (int i = 0; i < bookList.getUsedSize(); i++) {
            Book book = bookList.getBook(i);
            System.out.println(book);
        }
    }
}