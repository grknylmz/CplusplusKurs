//
// Created by Gurkan Yilmaz on 27/06/15.
//

#include <iostream>
#include "Dyna.h"


using namespace std;

class Dyna{
    int mx;
    Dyna(int x): mx{x}{}



public:
    static Dyna *createObject(int val){
        return new Dyna(val);
    }

    void display()const{

    }

};



int main(){
    Dyna *p = Dyna::createObject(45);

    p->display();

}