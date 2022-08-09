#include<iostream>
using namespace std; 

class Complex{
int real, imaginary;
public:
void getData(void){
cout<<"The real part is "<<real<<endl;
cout<<"The imaginary part is "<<imaginary<<endl;

}
void setData(int a, int b){
real = a;
imaginary = b;
}
};

int main()
{
    Complex c1;
    Complex *ptr = &c1;
int r, i;
cout<<"Enter the value for real part and imaginary part "<<endl;
cin>>r>>i;
    // (*ptr).setData(r,i); is exactly same as below
// Arrow Opeartor
ptr->setData(r,i);
    // (*ptr).getData(); is good as below
    ptr->getData();


    // Array of Objects
    Complex *ptr1 = new Complex[4];
    ptr1->setData(r,i);
    ptr1->getData();

    return 0;
}