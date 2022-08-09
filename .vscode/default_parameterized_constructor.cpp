#include<iostream>
using namespace std; 

class Complex{
int a, b;
public:
// Creating a constructor
/* Constructors is a special member function with same name as of the class. It is used to initailize the objects     
of the class.
It is automatically invoked(call krna ya execute krna ) whenever an object is created  */

Complex(int x, int y); // Constructor declaration; ye automatically run hoajata ha jesse hi hum object banate ha;
// ak aisa function ha class ke andr same name ka jo automatically call hojata ha object k liye;

void printNumbner(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};
Complex :: Complex(int x, int y){ // -->> This is a parameterized constructor as it takes a parameter;
  //cout<<"Enter the value of a and b for complex equation "<<endl;
  //cin>>a>>b;  // We have two ways to give xand y values implicit and explicit method both works well;
  a = x;
  b = y;
};
int main()
{  
    // Impilicit call;
   Complex a1(11,5);
   a1.printNumbner();

// Explicit call;
Complex b1 = Complex(7,8);
b1.printNumbner();

    return 0;
}