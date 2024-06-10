#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
   /* void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }*/
    
    void enterdata(){
            cout<<"Enter the value of a : ";
            cin>>a;
            cout<<"Enter the value of b : ";
            cin>>b;
    }

    void setdatabysum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void printnumber()
    {
        cout << "Your Complex number : " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.enterdata();
    c1.printnumber();

    c2.enterdata();
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();

    return 0;
}