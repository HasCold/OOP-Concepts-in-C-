#include<iostream>
using namespace std; 

// Base Class;
class Employee{
public:
int id;
float salary;
Employee(int inpId){ // COnstructor 
    id = inpId;
    salary = 34.0;

}
Employee(){}

};

// Derived Class Syntax 
/*
class {{derived-class-name}} : {{visibility mode}} {{base-class-name}}
{

}*/
/* but what is visibility mode ? -->> visibility mode ha inheritance ka ke ap apni class ko ko kis tarah se
   inherit karrahe ha whether publically or private
   Public Visibility Mode = Apke base class ke public members derived class ke Public member banjaye ge; Publically Inherit
   Private Visibility Mode =  APke base class ke public member  derived class ke private member bangaye ge; Private Inherit
NOTE :--
   Default Visibility Mode = By default private hota ha; 
   Private members of the base class will never be inherited by the derived class;
   */

// Creating a Programer class derived from Employee Base Class; 
class Programmer : public Employee{
public:
int languageCode;
Programmer(int inpid){  // Ye programmer ne inherit kiya ha employee ko tu ye call krne ki koshish karega 
  id = inpid;        // employee constructor ko yani employee ke default constructor ko tu hame is ke liye
 languageCode = 9; // employee ka default conatructor banana parega;
}                 
void getdata(){
cout<<id<<endl;
}
};

int main()
{
    Employee Hasan(4), Umer(5);
    cout<<"Hasan salary is "<<Hasan.salary<<endl;
    cout<<"Umer salary is "<<Umer.salary<<endl;    

Programmer skillf(10);
cout<<skillf.languageCode<<endl;
cout<<skillf.id<<endl;
skillf.getdata();


    return 0;
}