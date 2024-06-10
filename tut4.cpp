#include<iostream>
using namespace std;

class Harshit
{
    private:
    int a, b, c;

    public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata()
    {
            cout<<"The value of a : "<<a<<endl;
            cout<<"the value of b : "<<b<<endl;
            cout<<"the value of c : "<<c<<endl;
            cout<<"The value of d : "<<d<<endl;
            cout<<"The value of e : "<<e<<endl;
    }
};
void Harshit :: setdata(int a1, int b1, int c1)
{
        a=a1;
        b=b1;
        c=c1;
}
int main()
{
    Harshit Goswami;
    Goswami.d=22;
    Goswami.e=90;
    Goswami.setdata(21,22,34);
    Goswami.getdata();
    return 0; 
}