#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "Enter the id : ";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "This is Employee No : " << count << " The Id of employee : " << id << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is " << count << endl;
    }
};

int Employee ::count;

int main()
{
    Employee harsh, karan, mandeep, aman;
    harsh.setdata();
    harsh.getdata();
    Employee::getcount();

    karan.setdata();
    karan.getdata();
    Employee::getcount();

    mandeep.setdata();
    mandeep.getdata();
    Employee::getcount();

    aman.setdata();
    aman.getdata();
    Employee::getcount();

    return 0;
}