#include<iostream>
using namespace std; 

class Base{
public:
int var1;
// Virtual function ->> Base class kah raha ha ke agr mere type ka pointer derived class ke object ko point kraha ha tu  
// us ka hi display run krna mera display mat run krna; Tu isse run time polymorphism achieve hota ha;
 void display(){
    cout<<"1 Display Base class variable var1 "<<var1<<endl;
}

};

class Derived : public Base{
    public:
    int var_der;
    virtual void display(){
        cout<<"1 Display Base class variable var1 "<<var1<<endl;
        cout<<"1 Display Derived class variable var_der "<<var_der<<endl;
    }
};

int main()
{
   Base *bc_ptr;
   Derived *dc_ptr;
   Base obj1;
   Derived obj2;
   
   bc_ptr = &obj2; 
   bc_ptr->var1 = 39;
   bc_ptr->display();

        

    return 0;
}