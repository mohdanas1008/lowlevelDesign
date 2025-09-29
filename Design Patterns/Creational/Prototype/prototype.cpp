#include<bits/stdc++.h>
using namespace std;
// Prototype Design Pattern

// 1.Prototype Interface
class IBook{
    string title;
    string author;

    public:
    virtual void show() =0;
    virtual IBook* clone() const =0;
    virtual ~IBook(){};
};

// 2. Concrete Prototypes
class eBook:public IBook{
    string title;
    string author;
    public:
    eBook(string t, string a):title(t),author(a){}
    eBook(const eBook& other):title(other.title),author(other.author){}

    void show() { cout << "E-Book: " << title << " [" << author << "]\n"; }
    IBook* clone() const {
        return new eBook(*this);
    }
};

class printedBook:public IBook{
    string title;
    string author;
    public:
    printedBook(string t, string a):title(t),author(a){}
    printedBook(const printedBook& other):title(other.title),author(other.author){}

        void show(){ cout << "Printed Book: " << title << " (" << author << " author)\n"; }

    IBook* clone() const {
        return new printedBook(*this);
    }
};

// 3.Prototype Registry

class BookRegistry{
    map<string,IBook*> prototypes;
    public:

    void addToRegistry(string key, IBook* obj) {
        prototypes[key] = obj;
    }


    IBook* createBook(string key) {
        return prototypes.count(key) ? prototypes[key]->clone() : nullptr;
    }

    ~BookRegistry(){
        for(auto& pair:prototypes){
            delete pair.second;
        }
    }
};

int main()
{
    BookRegistry registry;

    registry.addToRegistry("ebook", new eBook("C++ Programming", "Bjarne Stroustrup"));
    registry.addToRegistry("printedbook", new printedBook("Design Patterns", "Erich Gamma"));

    // Creating new objects by cloning prototypes
    IBook* book1 = registry.createBook("ebook");
    IBook* book2 = registry.createBook("printedbook");  
    book1->show();
    book2->show();
    return 0;
}