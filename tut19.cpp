#include<iostream>
using namespace std;

        float sum(float a, float b)
        {
            cout<<"Using Fuction with this 2 arguements."<<endl;
                return a+b;
        }

    float sum(float a, float b, float c)
        {
            cout<<"Using Fuction with this 3 arguements."<<endl;
            return a+b+c;
        }
            int volume(int side)
            {
                return side*side*side;
            }
    int main()
    {
        int a;
        cout<<"The value of side of cube : ";
        cin>>a;
        cout<<"The volume of cube : "<<volume(a)<<endl<<endl;
        float x, y, z;
        cout<<"Enter the value of x : ";
        cin>>x;
        cout<<"Enter the value of y : ";
        cin>>y;
        cout<<"Enter the value of z : ";
        cin>>z;
        cout<<"The sum of X and Y : "<<sum(x,y)<<endl;
        cout<<"The value of X,Y and Z : "<<sum(x,y,z)<<endl;
        return 0;
    }