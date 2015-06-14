//
// Created by Gurkan Yilmaz on 14/06/15.
//

#include <math.h>
#include <iostream>
#include "Point.h"

////    Point::Point(double x, double y) : mx(x) , my(y) {
////    }



Point::Point(double x = 0. , double y = 0.) : mx{ x } , my{ y } {
}


void Point::display() const {
   //// std::cout<<"("<<mx<<")"<<"("<<my<<endl;
}

double Point::getX() const {
    return 0;
}

double Point::getY() const {
    return 0;
}

void Point::setX(double x) {

}

void Point::setY(double y) {

}

void Point::setXY(double x, double y) {

}

double Point::getOriginDistance() const {
    return sqrt(mx*mx + my*my);
}
