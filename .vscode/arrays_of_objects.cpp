#include<iostream>
using namespace std; 

// ********Arrays of Objects and passing Objects as Functions Arguments;**************
class Employee {
int Id;
int salary;
public:
void setId(void){
    cout<<"Enter the I.D. number "<<endl;
    cin>>Id;
}
void getId(void){
    cout<<"The I.D. of this employee is "<<Id<<endl;
} 


};
int main()
{
//   Employee Hasan, Umer, Talha, Farooq;
//   Hasan.setId();
// Hasan.getId();

Employee FB[4]; // Assume there is a company FB;
for (int i = 0; i < 4; i++)
{
   FB[i].setId();
   FB[i].getId();    
}

    return 0;
}