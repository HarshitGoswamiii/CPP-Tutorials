#include<iostream>
using namespace std;

class Animal
{
    private:
    int legs , eyes, ears;
    public: 
    int sound , mouth;

    void setData(int a1, int b1, int c1);
    void getdata(){

 cout<<"The value of a : "<<legs<<endl;
 cout<<"The value of b : "<<eyes<<endl;
     cout<<"The value of c : "<<ears<<endl;
  cout<<"The value of d : "<<sound<<endl;
  cout<<"The value of e : "<<mouth<<endl;
    }};
    void Animal :: setData(int a1, int b1, int c1)
    {
            legs=a1;
            eyes=b1;
            ears=c1;
    }
    int main()
    {
        Animal Cat;
        Cat.mouth=1;
        Cat.sound=2;
        Cat.setData(1,3,4);
        Cat.getdata();
        return 0;
    }