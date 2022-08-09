#include<iostream>
using namespace std; 

class Base{
public:
int var1;
void display(){
    cout<<"Display Base class variable var1 "<<var1<<endl;
}

};

class Derived : public Base{
    public:
    int var_der;
    void display(){
        cout<<"Display Base class variable var1 "<<var1<<endl;
        cout<<"Display Derived class variable var_der "<<var_der<<endl;
    }
};

int main()
{
   Base *bc_ptr;  // Base class pointer we have created;
   Base obj1;
   Derived obj2;
   bc_ptr = &obj2; // Base class ka pointer derived class ke object ko point krskta ha; It is permitted in C++;
// Pointer jis base class ka hoga usi ka function bhi run hoga isse kahte ha late binding;
// Agr apne Base class se pointer karaya aur use derived class se point krwayege tu sirf base class ke functions run honge; 
bc_ptr->var1 = 17;
// bc_ptr->var_der = 44;  Will throw an error;
bc_ptr->display();

Derived *dc_ptr;  // Derived class ka pointer;
dc_ptr = &obj2;
dc_ptr->var_der = 60;
dc_ptr->display();

    return 0;
}