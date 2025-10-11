#include<bits/stdc++.h>
using namespace std;

#include "BasePizza.hpp"
#include "PannerToppingDecorator.hpp"
#include "ToppingDecorator.hpp"
#include "panPizza.hpp"
#include "ChickenToppingDecorator.hpp"
#include "HandTossedPizza.hpp"

int main(){

    IBasePizza *jsutPanPizza= new PanPizza();
    cout<<"Type :: "<<jsutPanPizza->getDescription()<<" Cost:: "<< jsutPanPizza->getCost()<<endl;
    
    IBasePizza *paneerPanPizza= new PannerToppingDecorator(new PanPizza());
    cout<<"Type :: "<<paneerPanPizza->getDescription()<<" Cost:: "<<paneerPanPizza->getCost()<<endl;
    
    IBasePizza *justHandTossedPizza= new HandTossedPizza();
    cout<<"Type :: "<<justHandTossedPizza->getDescription()<<" Cost:: "<< justHandTossedPizza->getCost()<<endl;
    
    IBasePizza *chickenHandTossedPizza= new ChickenToppingDecorator(new HandTossedPizza());
    cout<<"Type :: "<<chickenHandTossedPizza->getDescription()<<" Cost:: "<<chickenHandTossedPizza->getCost()<<endl;
    
    IBasePizza *customPizza= new ChickenToppingDecorator(new PannerToppingDecorator(new HandTossedPizza()));
    cout<<"Type :: "<<customPizza->getDescription()<<" Cost:: "<<customPizza->getCost()<<endl;

    return 0;
}