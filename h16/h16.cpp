/**
 *  @author Derek Giap
 *  @date 10/13/2020
 *  @file h16.cpp
 */
#include <string>
#include <cmath>
using namespace std;

string STUDENT = "WHO AM I?"; // Add your Canvas/occ-email ID

#include "h16.h"
// Add your implementation here
void get(istream& in, Point& p)
{
    char ch;
    cout << "Enter Point x, y: ";
    in >> p.x >> ch >> p.y;
}

void print(ostream& out, const Point& p)
{
    out << "(" << p.x << ", " << p.y << ")" << endl;
}

double distanceBetween(const Point& a, const Point& b)
{
    return sqrt(pow((a.x - b.x), 2) + pow((a.y - b.y), 2));
}

Point midpoint(const Point& a, const Point& b)
{
    int num1 = (a.x + b.x) / 2;
    int num2 = (a.y + b.y) / 2;
    struct Point p;
    p.x = num1;
    p.y = num2;
    return p;
}

double perimeter (const Triangle& t)
{
    double len1, len2, len3, perimeter;
    len1 = distanceBetween(t.p1, t.p2);
    len2 = distanceBetween(t.p2, t.p3);
    len3 = distanceBetween(t.p3, t.p1);
    perimeter = len1 + len2 + len3;
    return perimeter;
}


/////////////// STUDENT TESTING ////////////////////
int run()
{
    cout << "Student testing" << endl;
    // cout << "Enter a point as (x, y): ";
    // Point p;
    // get(cin, p);
    // cout << "You entered ";
    // print(cout, p);
    // cout << endl;

    return 0;
}