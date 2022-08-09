#include<iostream>
using namespace std; 

// ************** COnstructors in Derived class **********
/* 
Case 1:
class B : pbulic A{
// Order of execution of constructor --> First A() then B()
};

Case 2:
class A : public B, public C{
// Order of execution of constructor --> B() then C() and A()
};

Case 3:
class A : public B, virtual public C{
// Order of execution of constructor --> C() bc it is virtual class(VIP) then B() then next is A() 
};
*/

class Base1{
int data1;
public:
Base1(int i){
    data1 = i;
    cout<<"Base1 class constructor is called "<<endl;
}
void printData1(void){
    cout<<"The value of data1 is "<<data1<<endl;
}
};

class Base2{
int data2;
public:
Base2(int i){
    data2 = i;
    cout<<"Base2 class constructor is called "<<endl;
}
void printData2(void){
    cout<<"The value of data2 is "<<data2<<endl;
}
};

// First execute the constructor of Base1 class then Base2 class; 
class Derived : public Base1, public Base2{
int derived1, derived2;
public:
// Taking initial arguments in derived class
Derived(int a, int b, int c, int d):Base1(a), Base2(b){
derived1 = c;
derived2 = d;
cout<<"Derived class constructor is called "<<endl;
}
void printData3(void){
    cout<<"The value of derived1 is "<<derived1<<endl;
    cout<<"The value of derived2 is "<<derived2<<endl;

} 

};

int main()
{
    Derived Hasan(33,2,4,7);
    Hasan.printData1();
Hasan.printData2();
Hasan.printData3();

    return 0;
}