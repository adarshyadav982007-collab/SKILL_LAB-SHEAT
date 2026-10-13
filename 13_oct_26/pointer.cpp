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
     animal *ace;  //pointer store meomory address 
     animal a;
     dog d;
     cat c;
     ace= &d;
     ace-> sound();
     ace= &c;
     ace-> sound();    

    } 

