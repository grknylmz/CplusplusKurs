#include <iostream>
#include <string>
using namespace std;

class Account{
public:
    ////////
    string getAccountName();
    void transfer(Account &r, double sum);
};

int main(){
    Account necati;
    Account sina;

    necati.transfer(sina,1000);

    return 0;
}


