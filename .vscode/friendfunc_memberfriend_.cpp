#include<iostream>
using namespace std; 

// Forward declaration ka matlab ham compiler ko guarantee derahe ha class calculator age majood ha;
class complex;
class calculator{
public:
int add(int a, int b){
    return (a + b);
}
int sum_realComplex(complex , complex );  // hm yahan o1 and o2 nahi likhe ge complex k sath kuyn ke ham na compiler 
    //  ko uper nahi bataya k complex ma o1 and o2 bhi ha is liye hm abhi sirf function banayege;
     // we need to declare friend function in complex class; 
int sum_comComplex(complex , complex );
};
class complex{
    // Individually declaring functions as friends;
   friend int calculator :: sum_realComplex(complex , complex ); 
friend int calculator :: sum_comComplex(complex, complex);

// Alter: Declaring the entire class as friends;
// friend class calculator;
   int a, b;
   public:
   void setnumber(int n1, int n2){
    a = n1;
    b = n2;
   }
   void printnumber(){     
    cout<<"Your number is "<<a<<" + i"<<b<<endl;
   }
};
// class calculator{
// public:
// int add(int a, int b){
//     return (a + b);
// }
// int sum_realComplex(complex , complex ){  // ye function do complex object legi
//      // we need to declare friend function in complex class; 
// }
// };
int calculator::sum_realComplex(complex o1, complex o2){
return (o1.a + o2.a);
};
int calculator :: sum_comComplex(complex o1, complex o2){
return (o1.b + o2.b);
};
int main()
{
complex c1, c2;
int n, m, x, y;
cout<<"Enter the two value for c1 "<<endl;
cin>>n>>m;
cout<<"Enter the two value for c2 "<<endl;
cin>>x>>y;
c1.setnumber(n,m);
c1.printnumber();
c2.setnumber(x,y);
c2.printnumber();

calculator calc, cals;
int result = calc.sum_realComplex(c1, c2);
cout<<"The sum of real part of o1.a and o2.a is "<<result<<endl; 
int res = cals.sum_comComplex(c1,c2); 
cout<<"The sum of real part of o1.b and o2.b is "<<res<<endl;

    return 0;
}