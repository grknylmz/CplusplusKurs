//
// Created by Gurkan Yilmaz on 14/06/15.
//

#ifndef CLASSEX_POINT_H ////        #pragma once   ---> Alternatif
#define CLASSEX_POINT_H


class Point {
public:
    Point() = default; ///C++ 11
    Point(double x, double y);
    void display()const ;
    double getX()const ;
    double getY()const ;
    void setX(double x);
    void setY(double y);
    void setXY(double x, double y);
    double getOriginDistance()const ;

private:
    double mx,my;
    /// int &r;
    /// const int a;

};


#endif //CLASSEX_POINT_H
