#include<iostream>
using namespase std;
class shape{
    public:
    virtual void calculateArea()=0;
};
class rectrangle : public shape{
    public :
    void calculateArea() override{
int length = 20, breath = 10;
cout<<"area of rectrangle is
"<<length*brearth<<endl;
    }
};
int main(){
    rectrangle r;
    r.calculateArea();
}