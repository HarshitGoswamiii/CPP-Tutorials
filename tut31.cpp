#include <iostream>
using namespace std;

class mad
{
    int a, b, c;

public:

        mad(int x, int y = 10, int z=12){
            a=x;
            b=y;
            c=z;
        }

        void print();
        void sum();
};

void mad:: sum(){
    cout<<"The sum of these numbers : "<<a+b+c<<endl;
}
void mad :: print(){
    cout<<"The value of a, b and c is "<<a<<", "<<b<<" and "<<c<<endl;
}
//     mad(int x, int y)
//     {
//         a = x;
//         b = y;
//     }

//     mad(int x)
//     {
//         a = x;
//         b = 0;
//     }
//     mad()
//     {
//         a = 0;
//         b = 0;
//     }

//     void print()
//     {
//         cout << "The Number is " << a << " + " << b << "i." << endl;
//     }
// };


int main()
{
    mad a1(1,3);
    a1.print();
    a1.sum();

    // mad a2(4);
    // a2.print();

    // mad a3;
    // a3.print();

    return 0;
}