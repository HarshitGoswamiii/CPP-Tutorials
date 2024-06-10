#include <iostream>
using namespace std;

// constructor is special member function with the same name of class.
// it is automatically invoked
// it is used to initialize the object of the class.

class compile
{
    int a, b;

public:
    compile(void);

    void printnumber()
    {
        cout << "The Number is " << a << " + " << b << "i" << endl;
    }
};

compile ::compile(void) // default constructor : it takes no parameters
{
    a=12;
    b=15;
}

int main()
{
    compile c1, c2, c3;
    c1.printnumber();
    c2.printnumber();
    c3.printnumber();
    return 0;
}

// charaterstics of constructor
/*
1. it should be declared in the public section of the class.
2. They are automatically invoked when the object is created.
3. They cannot return value and do not have return types.
4. it can have default arguemets.
5. we cannot refer to their address.

*/