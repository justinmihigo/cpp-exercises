#include <iostream>
#include "headers.h"
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter two numbers\n";
    cin>>a>>b;
    c = subtract(a, b);
    cout<<"Addition of "<<a<< "and "<<b << " is " <<add(a,b)<<endl;
    cout<<"Subtraction of "<<a<< "and "<<b << " is " <<c<<endl;
    cout<<"Multiplication of "<<a<< "and "<<b << " is " <<multiply(a,b)<<endl;
    cout<<"Division of "<<a<< "and "<<b << " is " <<divide(a,b)<<endl;
    cout<<"Modulus of "<<a<< "and "<<b << " is " <<modulusCalc10(a,b)<<endl;
    cout<<"Comparison of "<<a<< " and "<<b << "  "<<compare(a,b)<<" is the greatest"<<endl;
    if(compare(a,b)==0){
        cout<<"The numbers are equal\n";
    }
    return 0;
}