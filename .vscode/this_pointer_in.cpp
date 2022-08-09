#include<iostream>
using namespace std; 

class A{
int a;
public:
void setData(int a){
  // this point krta ha us object ki taraf jis ne usko execute kiya ha member func ke under;  
this->a = a;   // This is a keyword which is a pointer which points to the objects which invokes the member function;  
}
void getData(){
    cout<<"The value of a is "<<a<<endl;
}
};

int main()
// This is a keyword which is a pointer which points to the objects which invokes the member function;
{
    A a;
    a.setData(4);
    a.getData();
    
    return 0;
}