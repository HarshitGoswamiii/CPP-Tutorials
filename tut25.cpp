#include<iostream>
using namespace std;
class Employee{
    int id;
    int salary;
    public:

            void setId(void){
                salary = 122;
                cout<<"Enter Id of Employee : ";
                cin>>id;
            }

            void getId(void){
                cout<<"The Id of this employee : "<<id<<endl;
            }
};

int main(){
    /*Employee harsh, lovish, keshav;
    harsh.setId();
    harsh.getId();

    lovish.setId();
    lovish.getId();

    keshav.setId();
    keshav.getId();*/
    Employee fb[4];
    for (int i=0 ; i < 4 ;  i++){
            fb[i].setId();
            fb[i].getId();
    }
    return 0;
}