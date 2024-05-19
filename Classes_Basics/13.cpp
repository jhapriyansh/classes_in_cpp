#include <iostream>
#include <cmath>
using namespace std;

class Coordinate
{
    float x, y;
    // friend float distance(Coordinate c1, Coordinate c2);

public:
    Coordinate(float a = 0, float b = 0)
    {
        x = a;
        y = b;
    }
    void displayCoordinate()
    {
        cout << "The point is: (" << x << ", " << y << ")" << endl;
    }
    // The line below will give error, so we add static to it.
    // float distance(Coordinate c1, Coordinate c2)
    static float distance(Coordinate c1, Coordinate c2)
    {
        float dist;
        dist = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
        return dist;
    }
};

// float distance(Coordinate c1, Coordinate c2)
// {
//     float dist;
//     dist = sqrt(pow(c1.x - c2.x, 2) + pow(c1.y - c2.y, 2));
//     return dist;
// }

int main()
{
    Coordinate a(0, 0);
    Coordinate b(4, 3);
    a.displayCoordinate();
    b.displayCoordinate();
    float dist = Coordinate::distance(a, b);
    cout << dist<<endl;
    Coordinate c;
    c.displayCoordinate();
    return 0;
}