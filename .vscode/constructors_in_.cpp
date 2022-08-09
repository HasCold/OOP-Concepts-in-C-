#include<iostream>
using namespace std; 

class Complex{
int a, b;
public:
// Creating a constructor
/* Constructors is a special member function with same name as of the class. It is used to initailize the objects     
of the class.
It is automatically invoked(call krna ya execute krna ) whenever an object is created  */

Complex(void); // Constructor declaration; ye automatically run hoajata ha jesse hi hum object banate ha;
// ak aisa function ha class ke andr same name ka jo automatically call hojata ha object k liye;

void printNumbner(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};

Complex :: Complex(void){ // -->> This is a default constructor as it takes no parameters;
  cout<<"Enter the value of a and b for complex equation "<<endl;
  cin>>a>>b;
  a;
  b;
};
int main()
{
    Complex c1,c2, c3;  // constructors is wajah se invoke hua kuyn k wo class ke name pr tha 
    c1.printNumbner();
    c2.printNumbner();
    c3.printNumbner();

    return 0;
}

/* Characteristics of Constructors
1. It should be declared in the public section of the class; 
2. They are automatically invoked whenever object is created;
3. They cannot return values and do not have return types;
4. It can have default arguments;
5. We cannot refer to their address; 
*/