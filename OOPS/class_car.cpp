#include<iostream>
using namespace std;

class car {
    int price;
    string name;
    public:
    car(int n,string s){
        this->price=n;
        this->name=s;
    }
    void disp() {
        cout << "Price of the car " << name << " is " << price << endl;
    }
};

int main() {
    car myCar(1000,"BMW");
    myCar.disp();
    return 0;
}
