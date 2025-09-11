#include <iostream>
#include <vector>
using namespace std;

// compile time polymorphism ~ function overloading
// same function name with different parameters

int findSum(int a, int b) {
    return a + b;
}

double findSum(double a, double b) {
    return a + b;
}

int findSum(vector<int>arr){
    int sum=0;
    for(int x:arr){
        sum+=x;
    }
    return sum;
}

int main() {
    cout<<"----Function OverLoading----"<<endl;
    cout<<"sum of 2 integer numbers: 5 + 8 =>"<<findSum(5,8)<<endl;
    cout<<"sum of 2 decimal numbers: 9.99 + 8.5 =>"<<findSum(9.99,8.5)<<endl;
    vector<int>arr={1,5,9,10,15};
    cout<<"sum of Array values: [1,5,9,10,15] =>"<<findSum(arr)<<endl;
    return 0;
}