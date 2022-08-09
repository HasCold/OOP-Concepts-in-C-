#include<iostream>
using namespace std; 

// ***************Use of pointer in class and objects *******************



int main()
{
   int a = 4;
int *ptr = &a;  // We have stored the address of a in ptr;
cout<<"The value of a is "<<*(ptr)<<endl;  // *(ptr) it means we will Derefernce the ptr;
// & --> (Address of) operator
// * ---> (value at) Dereference operator 

// New Operator;
//int *p = new int (40);
float  *p = new float (40.78);
cout<<"\n The value at address p is "<<*(p)<<"\n"<<endl;

// Ye ha hamara dynamically new keyword se memory ko allocate krwana; 

int *arr = new int[4];
arr[0] = 10; 
arr[1] = 20;
arr[2] = 30;
arr[3] = 40;
delete[] arr;  // is tarah se hum dynamically allocated int aur block of memory ko delete krste ha;
for (int  i = 0; i < 4; i++)
{
    cout<<"The value of "<<"arr["<<i<<"] is "<<arr[i]<<endl;
}


    return 0;
}