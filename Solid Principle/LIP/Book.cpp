#include <bits/stdc++.h>
using namespace std;

class IBook {
public:
    virtual string getTitle() const = 0;
    virtual string getAuthor() const = 0;
    virtual double getPrice() const = 0;
    virtual void displayBookDetails() const = 0;

    virtual ~IBook() = default; // important for polymorphic base
};

class Book:public IBook
{
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p) : title(t), author(a), price(p) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }

    void displayBookDetails() const
    {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }

};

class EBook : public IBook
{
    string title;
    string author;
    double price;
    string downloadUrl;

public:
    EBook(string t, string a, double p, string url) : title(t), author(a), price(p), downloadUrl(url) {}

    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    string getDownloadUrl()  { return downloadUrl; }

    void displayBookDetails() const
    {
        cout << "E-Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
        cout << "Download URL: " << downloadUrl << endl;
    }
};

class PrintedBook : public IBook
{

private:
    string title;
    string author;
    double price;
    int stockSize;

public:
    PrintedBook(string t, string a, double p, int ss) : title(t), author(a), price(p), stockSize(ss) {}

    int getStockSize() const { return stockSize; }
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    double getPrice() const { return price; }
    void addStock(int amount) { stockSize += amount; }
    void decreaseStock(int amount)
    {
        if (stockSize >= amount)
        {
            stockSize -= amount;
        }
        else{
            cout << "Only"<<getStockSize()<<" stock available!" << endl;
        }
    }

    void displayBookDetails()  const
    {
        cout << "Printed Book Title: " << getTitle() << endl;
        cout << "Author: " << getAuthor() << endl;
        cout << "Price: $" << getPrice() << endl;
        cout << "In Stock:: " << getStockSize() << endl;
    }
};


void printDetails(IBook* book) {
    // This function only knows about IBook (base class)
    book->displayBookDetails();
}

int main()
{
    IBook* eBook= new EBook("E-Book Title", "Aurelius", 99.9, "http://downloadlink.com/ebook");
    IBook* printedBook= new PrintedBook("E-Book Title", "Aurelius", 99.9, 150);
    
    /* in function parameter we are using base class pointer
         but from here we are passing usbclass objects*/   
    printDetails(eBook);  //LIP
    printDetails(printedBook); //LIP

    delete eBook;
    delete printedBook;
    return 0;
}