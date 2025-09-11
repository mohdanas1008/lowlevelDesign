#include<bits/stdc++.h>
using namespace std;

// operator overloading with complex number class compiletime polymorphism

ostream& operator<<(ostream &COUT, const vector<int> &input)
{
    for (const int &val : input) {
        COUT << val << " ";
    }
    return COUT;
}

int operator+(vector<int> &a, vector<int> &b){
    int sum=0;
    for(int x:a){
        sum+=x;
    }

    for(int x:b){
        sum+=x;
    }
    return sum;
}

int main(){
    cout<<"----Operator OverLoading----"<<endl;
    cout<<"   1. overloading '<<' operator "<<endl;
    vector<int>arr1={1,2,3,4,5};
    string arr2="Hello 123";
    cout<<"Array values: "<<arr1<<endl;
    cout<<"string values: "<<arr2<<endl;
    
    cout<<"   2. overloading '+' operator to add 2 array "<<endl;
    vector<int>arr3={1,5,9};
    vector<int>arr4={10,15,20};
    cout<<"Array 1 values: "<<arr3<<endl;
    cout<<"Array 2 values: "<<arr4<<endl;
    cout<<"Sum of both array values: "<<(arr3+arr4)<<endl;
    return 0;
}