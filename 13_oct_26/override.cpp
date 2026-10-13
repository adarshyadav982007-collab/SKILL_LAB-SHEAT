#include<iostream>
using namespace std;
class Animal{
    public:
    virtual voide sound add(){
        cout <<" animal make a sound"<<endl;
    }
};
class dog : public animal 
{
    public:
     void sound() override
     {
        cout<<"dog barks<<endl;"
    }
};
   class cat: 
   public animal 
{
    public: void sound() override
    {
        cout<<"cat meow <<endl;"
    }
} ;
int main (){
    dog d;
    cat c;
    d.sound();
} 

