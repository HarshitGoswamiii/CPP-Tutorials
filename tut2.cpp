#include<iostream>
using namespace std;
int main()
{
    int marks[] = {46,55,67,75,64,88,98};
   /* int mathsMarks[4];
    mathsMarks[0]=244;
    mathsMarks[1]=323;
    mathsMarks[2]=344;
    mathsMarks[3]=433;
    cout<<"This is maths marks: "<<endl;
    cout<<mathsMarks[0]<<endl;
    cout<<mathsMarks[1]<<endl;
    mathsMarks[2]=55;
    cout<<mathsMarks[2]<<endl;
    
    cout<<mathsMarks[3]<<endl;

    cout<<"This is my marks: "<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    return 0;*/
   // for(int i = 0; i<4;i++){
     //   cout<<i<<"The Marks is : "<<marks[i]<<endl;
   // }
  /* int i=0;
   
   while( i<4)
   {
    cout<<"The marks of "<<i<<" is : "<<marks[i]<<endl;
    i++;

   }*/
  /* int i=0;
   do{
    cout<<"The marks of "<<i<<" is : "<<marks[i]<<endl;
    i++;
   }while(i<4);*/

   //pointer and array
   int* p =marks;
   cout<<*(p++)<<endl;
   cout<<*(++p)<<endl;
   /*cout<<"The value of *p[0] is "<<*p<<endl;
    cout<<"The value of (*p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
        cout<<"The value of *(p+3) is "<<*(p+3)<<endl;
      cout<<"The value of *(p+4) is "<<*(p+4)<<endl;
      cout<<"The value of *(p+5) is "<<*(p+5)<<endl;
      cout<<"The value of *(p+6) is "<<*(p+6)<<endl;*/
   return 0;
}