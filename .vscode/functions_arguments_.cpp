#include<iostream>
using namespace std; 

class complex{
int a, b; // By Defauult private;
public:
void setData(int v1, int v2){
    a = v1;
    b = v2;
}
void setDataby_sum(complex o1, complex o2){  // complex no. isi class k objects ha;
    a = o1.a + o2.a;
    b = o1.b + o2.b;

}
 void printNumber(){
    cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
}
};

int main()
{ // class complex ka object;
 complex c1, c2, c3;   // Hum objects ko pass krskte ha apne kisi bhi class methods ko; 
c1.setData(2,4);
c1.printNumber();

c2.setData(7,8);
c2.printNumber();

c3.setDataby_sum(c1, c2); // Hum c3 ke a aur b ko c1 and c2 ke equal karna chate ha; Isliye hum objects ko pass 
c3.printNumber(); // karenge apne class k andr;

    return 0;
}