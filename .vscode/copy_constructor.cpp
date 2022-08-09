#include<iostream>
using namespace std; 

// COpy constructor ak aisa constructor ha jo dosre ki copy bana deta ha;

class Number{
int a;
public:
Number(){
a = 0;
}                // Hum logo ko is tarah se default constructor banana parega;

Number(int num){
    a = num;
}

// IMPORTANT NOTE :-
// When no copy constructor is found, compiler supplies its own copy constructor;

Number(Number &obj){  // Making of Copy Constructor;
    cout<<"Copy constructor called !!"<<endl;
    a = obj.a;
}
void display(){
    cout<<"The number for this object is "<<a<<endl;
}

};

int main()
{
    Number x, y, z(45), z2;
  x.display();  
  y.display();  
  z.display();  
// z1 should exactly resemble z or x or y; 
// Copy constructor invoked;
Number z1(x);  // We have made a copy constructor of z1 which resemble x;
z1.display();

z2 = z; // Copy constructor not invoked; agr apka object pehle se created ha tab copy constructor call nahi hoga;
z2.display();

Number z3 = z;  // Copy constructor invoked; kuyn k hum ne isi line ma object banaya ha
z3.display();

    return 0;
}