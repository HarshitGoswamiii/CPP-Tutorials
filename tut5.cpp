#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    bool chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter the Binary Number : ";
    cin >> s;
}

bool binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format." << endl;
            return false;
        }
    }
    cout << "It is Binary Format." << endl;
    return true;
}

void binary ::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Complement of binary number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    if (!b.chk_bin())
    {
        return 0;
    }
    b.ones_compliment();
    b.display();
    return 0;
}