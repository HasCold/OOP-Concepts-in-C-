#include<iostream>
using namespace std; 

class Base{
int data1;  // private by default and is not inheritable;
public:
int data2;
void setdata();  // 3 member function ha is class ma;
int getData1();  // Private member inherit nahi hoskata lkn uska function inherit hosakta ha;
int getData2();

};
void Base :: setdata(void){
    data1 = 10;
    data2 = 20;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}
//  Visibility Mode is Private;
class Derived : private Base{  // Class is being derived private; Base class ke public member derived hone k baad
//  private member declare honge;
int data3; 
public:
void process();  // 2 member function ha is class ma;
void display();

};
void Derived :: process(void){
    setdata(); // Hum setdata function ko directly call nahi krskte apne main function ma; bc of private mode;
    data3 = data2 * getData1();
}
void Derived :: display(void){
    cout<<"Value of data 1 is "<<getData1()<<endl;  // data1 ko hum function ke through laye ge kuyn ke base class ma
    // data1 private tha aur private inherit nahi hota ha tu hum ko kisi aisa method se lana parega jo inherit ho;
    cout<<"Value of data 2 is "<<data2<<endl;
    cout<<"Value of data 3 is "<<data3<<endl;

}

int main()
{
    Derived der;
// der.setdata();
der.process();
der.display();

    return 0;
}