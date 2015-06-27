#include <iostream>
#include "Point.h"


using namespace std;


class Complex{
    Complex(double r, double i); /// kartezyen
    Complex(double angle, double distance , int kutupsal); // kutupsal

public:

    static Complex *createCarte(double r, double i){
        return new Complex(r,i);
    }


    static Complex *createPolar(double angle, double distance , int kutupsal){
        return new Complex(angle , distance , kutupsal);
    }
};






int main(){


    return 0;
}