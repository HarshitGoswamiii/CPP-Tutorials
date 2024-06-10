#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y);

    void printnumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

complex ::complex(int x, int y) // this is parameterised constructor as it takes two parameters
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    complex a(4, 2);
    a.printnumber();

    // Explicit call
    complex b = complex(5, 7);
    b.printnumber();

    return 0;
}