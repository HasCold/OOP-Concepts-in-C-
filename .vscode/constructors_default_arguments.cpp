#include<iostream>
using namespace std; 

class Simple{
int data1, data2, data3;
public:
// Constructors ke sath hum default arguments use krskte ha;  
Simple(int a, int b=9, int c=13){ // b ko hamne default value provide krdi ha;
    data1 = a;
    data2 = b;
    data3 = c;
}
void printData();
};

void Simple :: printData(){
cout<<"The value of data1, data2 and data3 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
};

int main()
{
 Simple s(1,4);  // Agr ma argument ma b ki value nahi deta tu 9 print hojata;
 s.printData();

Simple s1(8);
s1.printData();

Simple s2(0,0,6);
s2.printData();
    return 0;
}