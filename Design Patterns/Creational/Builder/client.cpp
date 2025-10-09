#include <bits/stdc++.h>
#include "director.hpp"
#include "gamingPCBuilder.hpp"
#include "officePCBuilder.hpp"
using namespace std;
int main()
{
    // Building a Gaming PC
    cout<<"----Gaming PC Specifications:----"<<endl;
    Director director;
    GamingPCBuilder gamingBuilder;
    director.setBuilder(&gamingBuilder);
    Computer* gamingPC = director.setComputer();
    gamingPC->showSpecs();

    // Building an Office PC
    cout<<"----Office PC Specifications:----"<<endl;
    Director director1;
    OfficePCBuilder officeBuilder;
    director1.setBuilder(&officeBuilder);
    Computer* OfficePc = director1.setComputer();
    OfficePc->showSpecs();
    return 0;
}
