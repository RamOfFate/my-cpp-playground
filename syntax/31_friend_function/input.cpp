#include <iostream>
using namespace std;

class Wallet{
    private:
        double cash;
        
    public:
        Wallet(){
            cash = 20;
        }

        double getCash(){
            return cash;
        }
        
        friend void wife(Wallet &w);
};

void wife(Wallet &w){
    w.cash *= 0;
}

int main(){
    Wallet wallet = Wallet();
    cout << wallet.getCash() << endl;
    wife(wallet);
    cout << wallet.getCash() << endl;

    return 0;
}