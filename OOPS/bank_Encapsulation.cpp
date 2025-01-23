#include<iostream>
using namespace std;

class bank{
    int balance;
    int actno;
    public:
    void deposit(int balance){
        this->balance=balance;
    }
    void displayBalance(){
        cout<<"The balance in your account is: "<<this->balance<<endl;
    }
    void Withdrawal(int n){
        if(n<=this->balance){
            cout<<"Withdrawal of amount "<< n <<" Succesfull"<<endl;
            this->balance=(this->balance)-n;
        }else{
            cout<<"Amount in your account is not sufficient"<<endl;
        }
    }
};

int main(){
    bank b;
    b.deposit(100);
    b.displayBalance();
    b.Withdrawal(70);
    b.displayBalance();
    b.Withdrawal(200);
return 0;
}
