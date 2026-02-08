#include <iostream>
using namespace std;

int main(){
    int itemPrice = 13;
    int shippingCost = 5;
    
    int sum = itemPrice + shippingCost;

    cout << "item price {" << itemPrice << "} + shipping cost {" << shippingCost << "} = " << sum << endl;

    return 0;
}