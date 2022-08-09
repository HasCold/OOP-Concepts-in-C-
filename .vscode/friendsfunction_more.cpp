#include<iostream>
using namespace std; 

class Y; // Forward declaration;
class X{
int data;
public:
void setData(int value){
    data = value;
}
friend void add(X, Y); // Yahan tak compiler ane ka baad bolega ye Y kya ha tu hame ak forward declaration deni
};   // paregi  tu hame Y k hone ka acknowledgement deni paregi;
class Y{
    int num;
    public:
    void setData(int value){
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives as "<<o1.data + o2.num;
}
int main()
{
    X a; // X class ka ak object;
    a.setData(3);
    Y b; // Y class ka ak object;
    b.setData(5);
    add(a, b);// yani ma add ko a aur  b object dedunga;

    return 0;
}