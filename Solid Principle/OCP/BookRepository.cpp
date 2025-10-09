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

class IBookRepository{
    public:
    virtual void saveToDB(const Book& bookObj) = 0;
};

class sqlBookRepository:public IBookRepository{
    public:
    void saveToDB(const Book& bookObj){
        cout<<bookObj.getTitle() << " Book saved to SQL BD!" << endl;
    }
};

class fileBookRepository:public IBookRepository{
    public:
    void saveToDB(const Book& bookObj){
        cout<<bookObj.getTitle() <<" Book saved to File system!" << endl;
    }
};

class cacheBookRepository:public IBookRepository{
    public:
    void saveToDB(const Book& bookObj){
        cout<<bookObj.getTitle() <<" Book saved to Cache !" << endl;
    }
};


int main() {
    Book b1("Clean Code", "Robert Martin", 450.0);
    IBookRepository *repo;
    repo = new sqlBookRepository();
    repo->saveToDB(b1);
    repo = new fileBookRepository();
    repo->saveToDB(b1);

    return 0;
}
