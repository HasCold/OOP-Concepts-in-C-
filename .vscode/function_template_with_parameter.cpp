#include<iostream>
using namespace std; 


template<class T>
void Swap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

template<class T1, class T2>
float funcAverage(T1 a, T2 b){
float avg = (a + b)/2.0;
return avg;
}

int main()
{
    float a;
    a = funcAverage(6.9,2);
    cout<<"The value of a is "<<a<<endl;
int x = 5; int y = 7;
swap(x,y);
cout<<"The value of x is "<<x<<endl<<"The value of y is "<<y<<endl;

    return 0;
}