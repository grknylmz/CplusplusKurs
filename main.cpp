#include <iostream>
#include "Point.h"


using namespace std;

int main() {
    Point p1;
    cout<<p1.getY()<<endl;
    p1.display();
    cout<<p1.getOriginDistance()<<endl;
    Point *refPoint = new Point(5,5);
    const Point refpoint2{6,6};



}