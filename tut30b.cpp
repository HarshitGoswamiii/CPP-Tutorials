#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }

    void display()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    point p=point(5,7);
    p.display();

    point q(2, 6);
    q.display();

    return 0;
}

// create a function (Make ot using friend function) between two points objects and computes the distance between those 2 points
/*

use this examples
distance between (1,1) and (1,1) is 0
distance between (0,1) and (0,6) is 5
distance between (1,0) and (70,0) is 69


*/