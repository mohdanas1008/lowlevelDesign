#include <bits/stdc++.h>
using namespace std;

class Book{
    string title;
    string author;
    double price;

    public:
    Book(string t, string a, double p): title(t), author(a), price(p) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }

};

class BookPrinter{
    public:
    static void printBook(const Book& bookObj){
        cout << "Title: " << bookObj.getTitle() << endl;
        cout << "Author: " << bookObj.getAuthor() << endl;
        cout << "Price: " << bookObj.getPrice() << endl;
    }
};

class BookRepository{
    public:
    static void saveToDB(const Book& bookObj){
        cout << "Book saved to database!" << endl;
    }
};


int main() {
    Book b1("Clean Code", "Robert Martin", 450.0);

    BookPrinter::printBook(b1);
    BookRepository::saveToDB(b1);

    return 0;
}
