#include<iostream>
using namespace std; 

// Writing a function which swaps the class c1 and c2 value;

class c2;
class c1{   // User defined data types banaye hamne;
int val1;
friend void exchange(c1&, c2&); // c1 and c2 ka object reference leta ha; exchange function c1 and c2 ka private parts 
public:         // ko access krskta ha;          
void indata(int a){
    val1 = a;
}
void display(void){
    cout<<val1<<endl;
}
};

class c2{
int val2;
friend void exchange(c1&, c2&);
public:
void indata(int a){
    val2 = a;
}
void display(void){
    cout<<val2<<endl;
}
};
/* Trick to swap 2 numbers
temp = a;
a = b;
b = temp; */
void exchange(c1 &x, c2 &y){  // refrence to data of type c1 and reference to data of type c2; Call by reference
   int temp = x.val1;
   x.val1 = y.val2;
   y.val2 = temp;
   
}
int main()
{
    c1 oc1;
   c2 oc2;

   oc1.indata(24);
   oc2.indata(35);
exchange(oc1, oc2);

cout<<"The value of c1 after exchanging becomes: ";
oc1.display();
cout<<"The value of c2 after exchanging becomes: ";
oc2.display();

    return 0;
}