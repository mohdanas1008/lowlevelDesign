#include <bits/stdc++.h>
using namespace std;

// Encapsulation with book class
class Book
{

private:
    string title;
    string author;
    double price;
    int stock;

public:
    Book()
    {
        title = "";
        author = "";
        price = 0.0;
        stock = 0;
    }

    Book(string t, string a, double p, int s)
    {
        title = t;
        author = a;
        setPrice(p);
        stock = s;
    }

    double getPrice() const
    {
        return price;
    }
    void setPrice(double p)
    {
        if (p >= 0)
            price = p;
        else
            cout << "Price cannot be negative!" << endl;
    }

    string getTitle() const
    {
        return title;
    }
    void setTitle(string t)
    {
        title = t;
    }
    string getAuthor() const
    {
        return author;
    }
    void setAuthor(string a)
    {
        author = a;
    }
    int getStock() const
    {
        return stock;
    }
    void addStock(int s)
    {
        stock += s;
    }
    void reduceStock(int s)
    {
        if (s > stock)
        {
            cout << "Not enough stock to sell " << s << " books!" << endl;
        }
        else
        {
            stock -= s;
        }
    }
};

int main()
{

    Book theTruth;
    theTruth.setTitle("The Lesson");
    theTruth.setAuthor("murcus");
    theTruth.setPrice(299.99);
    theTruth.addStock(20);

    cout << "Book Details:" << endl;
    cout << "Title: " << theTruth.getTitle() << endl;
    cout << "Author: " << theTruth.getAuthor() << endl;
    cout << "Price: " << theTruth.getPrice() << endl;
    cout << "Stock: " << theTruth.getStock() << endl;

    int sellingAmount;
    cout << "let's sell some books, Please enter number of books to sell" << endl;
    cin >> sellingAmount;

    theTruth.reduceStock(sellingAmount);
    cout << "Updated Stock: " << theTruth.getStock() << endl;

    cout<<"--------------------------------"<<endl;

    Book theFaith= Book("The Faith","John Doe",199.99,15);
    cout << "Book Details:" << endl;
    cout << "Title: " << theFaith.getTitle() << endl;   
    cout << "Author: " << theFaith.getAuthor() << endl;
    cout << "Price: " << theFaith.getPrice() << endl;
    cout << "Stock: " << theFaith.getStock() << endl;    

    cout<<"--------------------------------"<<endl;
    cout<<"Increae he stock by 11"<<endl;
    theFaith.addStock(11);  
    cout << "Updated Stock: " << theFaith.getStock() << endl;

    cout<<"set the price to -99.99"<<endl;
    theFaith.setPrice(-99.99);  
    cout << "Price: " << theFaith.getPrice() << endl;

    return 0;
}