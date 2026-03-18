#include <cmath>
#include <iostream>

using namespace std;

struct Point {
    int x;
    int y;
};

double distance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    Point p1 {4,0};
    Point p2 {0,3};
    cout << distance(p1, p2);
}