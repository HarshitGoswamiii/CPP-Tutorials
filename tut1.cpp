#include<iostream>
using namespace std;
int main()
{
    char oper;
    float num1, num2;
    cout<<"Enter the operator : ";
    cin>>oper;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;

    switch(oper)
    {
        case '+':
        cout<< num1 << " + " << num2 << " = " <<num1+num2;
        break;

        case '-':
        cout<< num1 << " - " << num2 << " = " <<num1-num2;
        break;
    
        case '*':
        cout<< num1 << " * " << num2 << " = " <<num1*num2;
        break;

        case '/':
        cout<< num1 << " / " << num2 << " = " <<num1/num2;
    }
    return 0;
}