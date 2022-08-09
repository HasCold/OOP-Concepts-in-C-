#include<iostream>
using namespace std; 

class Point{
int x, y;
public:
// Point parameterized constructor banaye ge hum;
Point(int a, int b); // Function Prototype;

void displayPoint(void){
    cout<<"The point is ("<<x<<" , "<<y<<")"<<endl;
}

};
Point::Point(int a, int b){  // Function Declaration/ Definition;
x = a;
y = b;

};

int main()
{
    Point p(8,4);  // Function Call >> Automatically run for the object;
    p.displayPoint();

    Point q(-22,6);
    q.displayPoint();

    return 0;
}