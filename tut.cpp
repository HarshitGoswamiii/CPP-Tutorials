#include<iostream>
using namespace std;
int main()
{
    int a= 3;
    int* b = &a;

    cout<<"The address of a is : "<<b<<endl;
    cout<<"The Address of a is : "<<*b<<endl;
    cout<<"The address of a is : "<<&a<<endl;

    int** c=&b;
    cout<<"The address of b : "<<&b<<endl;
    cout<<"The address of b : "<<*c<<endl;
    cout<<"The address of b : "<<c<<endl;
    
    return 0;
}