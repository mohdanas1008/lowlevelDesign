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


// above is code form OCP principle
class BookService{
    private:
        IBookRepository* bookRepository;
    public:
    BookService(IBookRepository *repo): bookRepository(repo) {}

    void saveBook(const Book& bookObj){
        bookRepository->saveToDB(bookObj);
    }
};

int main(){
    
    Book eBook("Clean Code", "Robert Martin", 450.0);
    cout<<"=================== DIP Principle ================="<<endl;
    cout<<"Book Details: "<<endl;
    cout<<"\tTitle: "<<eBook.getTitle()<<endl;
    cout<<"\tAuthor: "<<eBook.getAuthor()<<endl;
    cout<<"\tPrice: "<<eBook.getPrice()<<endl;
    // saving the E-book
    // saving to sql database
    IBookRepository *sqlBookRepo= new sqlBookRepository();
    
    BookService *eBookServiceSql= new BookService(sqlBookRepo);
    eBookServiceSql->saveBook(eBook);
    
    // saving to cache
    IBookRepository *cacheBookRepo= new cacheBookRepository();
    BookService *eBookServiceCache=new BookService(cacheBookRepo);
    eBookServiceCache->saveBook(eBook);

    return 0;
}