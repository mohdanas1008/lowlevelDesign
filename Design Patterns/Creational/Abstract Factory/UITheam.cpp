#include<bits/stdc++.h>
using namespace std;
// Abstract factory design pattern is a creational design pattern that provides an interface for creating families of related or dependent objects without specifying their concrete classes.
// Abstract Product

class IButton{
    public:
    virtual void render() = 0;
    virtual ~IButton(){}
};

class ICheckbox{
    public:
    virtual void render() = 0;
    virtual ~ICheckbox(){}
};

// concrete Product

class DarkButton: public IButton{
    public:
    void render() override{
        cout<<"Rendering Dark Button"<<endl;
    }
};

class DarkCheckbox: public ICheckbox{
    public:
    void render() override{
        cout<<"Rendering Dark Checkbox"<<endl;
    }
};

class LightButton: public IButton{
    public:
    void render() override{
        cout<<"Rendering Light Button"<<endl;
    }
};

class LightCheckbox: public ICheckbox{
    public:
    void render() override{
        cout<<"Rendering Light Checkbox"<<endl;
    }
};

// Abstract Factory
class IUIFactory{
    public:
    virtual IButton* createButton()=0;
    virtual ICheckbox* createCheckbox()=0;
    virtual ~IUIFactory(){}
};

// Concrete Factory
class DarkUIFactory: public IUIFactory{
    public:
    DarkUIFactory(){cout<<"Dark UI Factory Created"<<endl;}
    IButton* createButton(){
        return new DarkButton();
    }

    ICheckbox* createCheckbox(){
        return new DarkCheckbox();
    }
};

class LightUIFactory: public IUIFactory{
    public:
    LightUIFactory(){cout<<"Light UI Factory Created"<<endl;}
    IButton* createButton(){
        return new LightButton();
    }

    ICheckbox* createCheckbox(){
        return new LightCheckbox();
    }
};

int main(){
    cout<<"****Abstract Design Pattern****"<<endl;

    // creating dark UI;

    DarkUIFactory darkUI;
    IButton* button= darkUI.createButton();
    ICheckbox* checkBox=  darkUI.createCheckbox();
    
    button->render();
    checkBox->render();

    delete button;
    delete checkBox;
    return 0;
}