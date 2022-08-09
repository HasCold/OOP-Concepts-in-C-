#include<iostream>
#include<cmath>
using namespace std; 

// Create a function(Hint: Make it a friend function) which takes 2 point objects and computes the distance
// between these points;
// Formaula:  square root (x2 - x1)^2 + (y2 - y1)^2


class PointX{
int x1, x2;
public:
void set_data(int n1 ,int n2){
 
    x1 = n1;
    x2 = n2;
 }
void subt_point1(){
 float resulta; 
 resulta = (x2 - x1)^2; 
if (resulta > 1 )
{
  cout<<"The Horizontal length of (x2 - x1)^2 are "<<resulta<<" meters"<<endl;}
else{
  cout<<"The Horizontal length of (x2 - x1)^2 are "<<resulta<<" meter"<<endl;
}
}

int sol1(){
float resulta; 
return resulta  = (x2 - x1)^2; 
}
};

class PointY{
int y1, y2;
public:
void set_value(int m1, int m2){
 
    y1 = m1;
    y2 = m2;
}   
void subt_point2(){
float resultb;
resultb = (y2 - y1)^2; 
if (resultb > 1 )
{
  cout<<"The Vertical length of (x2 - x1)^2 are "<<resultb<<" meters"<<endl;}
else{
  cout<<"The Vertical length of (x2 - x1)^2 are "<<resultb<<" meter"<<endl;
}
}
int sol2(){
float resultb;
return  resultb = (y2 - y1)^2; 
}
};

int main()
{
   
  PointX Hasan;
  PointY Ali;
  int n1,n2,m1,m2;
 cout<<"Enter the value of x1 and x2 "<<endl;
cin>>n1>>n2;
 cout<<"Enter the value of y1 and y2 "<<endl;
cin>>m1>>m2;
  Hasan.set_data(n1,n2);
  Hasan.subt_point1();
  Ali.set_value(m1,m1);  
Ali.subt_point2();

float res = Hasan.sol1() + Ali.sol2();
if (sqrt(res) > 1 )
{
  cout<<"The distance between (x2 - x1)^2 + (y2 - y1)^2 is "<<res<<" meters"<<endl;}
else{
  cout<<"The distance between (x2 - x1)^2 + (y2 - y1)^2 is "<<res<<" meter"<<endl;
}

   return 0;
}