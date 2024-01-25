#include <iostream>
#include <cmath> 
using namespace std;
class Point {
private:
    int x;
    int y;

public:
    int getx() {
        return x;
    }

    int gety() {
        return y;
    }

    void setx(int a) {
        x = a;
    }

    void sety(int b) {
        y = b;
    }

    Point(int a, int b) {
        x = a;
        y = b;
    }

    float distance(Point p) {
        return sqrt(pow(x - p.getx(), 2) + pow(y - p.gety(), 2));
    }
};

int main() {
    int x, y;

    cout << "Enter coordinates for the first point (x y): ";
    cin >> x >> y;
    Point p1(x, y);

    cout << "Enter coordinates for the second point (x y): ";
    cin >> x >> y;
    Point p2(x, y);

    cout << "The distance between these two points is " << p1.distance(p2) << endl;

    return 0;
}