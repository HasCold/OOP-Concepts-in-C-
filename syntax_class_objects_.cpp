#include<iostream>
using namespace std; 

class employee{
  private:
       int a,  b,  c;
  public:
  int d, e, f;
  void ToData(int a1, int b1, int c1); // Function Declaration ; Hum isko baad ma define karenge;
  void getData(){
    cout<<"The value of a is = "<<a<<endl;
    cout<<"The value of b is = "<<b<<endl;
    cout<<"The value of c is = "<<c<<endl;
    cout<<"The value of d is = "<<d<<endl;
    cout<<"The value of e is = "<<e<<endl;
    cout<<"The value of f is = "<<f<<endl;

  }
};
// kuyn k ham ye batana chahte k  wo ToData function hum logo ne employee k andr banaya ha;  
void employee :: ToData(int a1, int b1, int c1){  // (::) = Scope Resolution operator;
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    employee Hasan;   // Hum yaha pr employee class ka ak object banaye ge;  
    Hasan.ToData(10, 3, 6);  // Hamara a b c private ha usko hum direct access nahi krskte. usko sirf class  
   Hasan.d = 34;            // ka koi function access krskta ha;
    // Hasan.a = 788; This will throw an error as it is a private;
   Hasan.e = 67;
    Hasan.f = 28;
Hasan.getData(); // getdata() sari values ko print krdeta ha cout se;
    return 0;
}