#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void setdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumby(complex o1, complex o2);

    void printnumber()
    {
        cout << "The Number is " << a << " + " << b << "i" << endl;
    }
};

complex sumby(complex o1, complex o2)
{
    complex o3;
    o3.setdata((o1.a + o1.b), (o2.a + o2.b));
    return o3;
}

int main()
{
    complex harsh, keshav, sum;
    harsh.setdata(1, 3);
    harsh.printnumber();

    keshav.setdata(6, 4);
    keshav.printnumber();

    sum = sumby(harsh, keshav);
    sum.printnumber();
    return 0;
}