#include<iostream>
using namespace std; 

// Syntax for inheriting in multiple inheritance;
/* class DerivedC : visibilty-mode base1, visibility-mode base2
{
    Class body of class "DerivedC"
} */

class Base1{
protected:
int base1int;
public:
void set_base1int(int a){
    base1int = a;
}
};

class Base2{
protected:
int base2int;
public:
void set_base2int(int a){
   base2int = a;
}
};

class Base3{
protected:
int base3int;
public:
void set_base3int(int a){
   base3int = a;
}
};
// We can add more Base classes in the inherited Derived class;
class Derived : public Base1, public Base2, public Base3{
public:
void show(){
    cout<<"The value of base1 is "<<base1int<<endl;
    cout<<"The value of base2 is "<<base2int<<endl;
    cout<<"The value of base3 is "<<base3int<<endl;
cout<<"The sum of these values is "<<base1int + base2int + base3int<<endl;
}
};

// The inherited Derived class will look somethimg like this:
// Data members:
        // base1int ---> protected 
        // base2int ---> protected
        // base3int ---> protected 

// Member Functions:
// set_base1int() ---> public
// set_base2int() ---> public
// ste_base3int() ---> public
// show() ---->> public;

int main()
{
 Derived Hasan;
 Hasan.set_base1int(4);
 Hasan.set_base2int(38);
 Hasan.set_base3int(77);
 Hasan.show();

    return 0;
}