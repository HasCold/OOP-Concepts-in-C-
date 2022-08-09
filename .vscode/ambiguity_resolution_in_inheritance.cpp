#include<iostream>
using namespace std; 

// *******************Ambiguity Resolution In Inheritance;*******************************

class Base1{
public:
void greet(){
    cout<<"How are you doing? \n"<<endl;
}
};

class Base2{
public:
void greet(){
    cout<<"Kaise ho? \n"<<endl;
}
};

class Derived : public Base1, public Base2{
int a;
public:
void greet(){
    Base1 :: greet();  // derived class ma agr ambiguity ajati ha tu hame istarah se scope resolution operator laga kr 
}   // solve krna parta ha;
};

// FOR AMBIGUITY 2;
class B{
public:
void say(){
    cout<<"Hello World "<<endl;
}
};

class D : public B{
int a;
// D's new say() method will override base class's say() method;
public:
void say(){
    cout<<"Hello my beautiful people "<<endl;
}
};

int main()
{
    // AMBIGUITY 1;
//     Base1 obj1;
//     Base2 obj2;
// obj1.greet();
// obj2.greet();
// Derived d;
// d.greet();     // We have to tell the compiler what class of  greet is used; 

//  AMBIGUTIY 2;
B b;
D d;
b.say();
d.say();

    return 0;
}