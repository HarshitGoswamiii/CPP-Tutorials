#include <iostream>
using namespace std;
class shop
{
    int ItemId[10];
    int ItemPrice[10];
    int counter;

public:
    void initcounter() { counter = 0; }
    void setprice(void);
    void displayprice(void);
};

void shop ::setprice(void)
{
    cout << "Enter the Item ID of item no " << counter + 1 << " : ";
    cin >> ItemId[counter];
    cout << "Enter the Item Price : Rs ";
    cin >> ItemPrice[counter];
    counter++;
}

void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with Id " << ItemId[i] << " : Rs " << ItemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}