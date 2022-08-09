#include<iostream>
using namespace std; 

class Complex{
  int x, y;
public:
Complex(){     // Constructor Overloading;
    x = 0;
    y = 0;
}
Complex(int a, int b){  // ak class ma multiple constructor hoskate ha jaise hm abhi  b ki value by defaultt 
    x = a;      // zero kardenge;
    y = b;
}
Complex(int a){
x = a;
y = 0;
}
 void print_num(){
    cout<<"Your number is "<<x<<" + "<<y<<"i"<<endl;
}
};

int main()
{
    Complex c1(5,2);
c1.print_num();

Complex c2(5);
c2.print_num();

Complex c3;
c3.print_num();

    return 0;
}