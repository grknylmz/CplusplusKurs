//
// Created by Gurkan Yilmaz on 04/07/15.
//



#pragma once;
#include <vector>



class Myint{
    int mval;
    std::vector<int> MyVector;
    int mmax, mmin;




public Myint(int = 0);
    bool operator<(const Myint &)const;
    friend bool operator <(const Myint &, const Myint &);
    friend bool operator <=(const Myint &, const Myint &);
    friend bool operator >(const Myint &, const Myint &);
    friend bool operator >=(const Myint &, const Myint &);
    friend bool operator ==(const Myint &, const Myint &);
    friend bool operator !=(const Myint &, const Myint &);

    friend Myint operator+(const Myint&, const Myint &);
    friend Myint operator-(const Myint&, const Myint &);
    friend Myint operator/(const Myint&, const Myint &);
    friend Myint operator*(const Myint&, const Myint &);
    friend Myint operator%(const Myint&, const Myint &);

    Myint &operator+=(const Myint &r)
    Myint &operator-=(const Myint &r)
    Myint &operator*=(const Myint &r)
    Myint &operator/=(const Myint &r)


    Myint &operator++();
    Myint operator++(int);

    Myint &operator--();
    Myint operator--(int);
};


bool operator<(const Myint &, const Myint &);
//  Normal int de çalışmasının sebebi conversion constructor.
