#include<iostream>
using namespace std;

class shape{
    public:
    virtual void area()=0;
    void show(){
        printf("I'm Parent Class");
    }
};
class rectangle : public shape{
    int len,bre;
    public:
    rectangle(int len,int bre){
        this->len=len;
        this->bre=bre;
    };
    void area() override{
        cout<<"Area of the rectangle is:"<<len*bre<<endl;
    };
    void show(){
        printf("I'm Child class");
    }
};
int main(){
    rectangle r1(10,20);
    r1.area();
    r1.show();
    return 0;
}
