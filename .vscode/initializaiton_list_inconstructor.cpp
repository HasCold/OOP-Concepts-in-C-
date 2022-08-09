#include<iostream>
using namespace std; 

/* 
Syntax for initialization list in constructor:
constructor (argument-list) : initialization-section
{
    initialization-section :- iska matlab constructor ma value dene ka tarika;
    assignmtant + other code;
}
*/

class Test{
int a; int b;   // Jo cheez pehle declare hoti ha wo pehle initialize bhi hoti ha;
public:
// Test(int i, int j) : a(i), b(j){
//   Test(int i, int j) : a(i), b(i+j){ 
    // Test(int i, int j) : a(i), b(a + j){
// Test(int i, int j) : a(i), b(2*j){
     Test(int i, int j) : b(j), a(i+b){  // RED FLAG this will create a problem and shows a garbage value in output
     //  beacuse a will be initialized first;
    cout<<"Constructor executed "<<endl;
    cout<<"Value of a is "<<a<<endl;
    cout<<"Value of b is "<<b<<endl;

}
};

int main()
{
 Test Hasan(4,6);


    return 0;
}