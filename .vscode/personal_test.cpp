#include<iostream>
#include<string>
using namespace std; 

class Manage{
int stud_num;
string cl,name;
static int counter; // By-Defauilt initialize to zero;
public:
string ven = "Karachi University";
void setData(void){
    cout<<"Enter the "<<counter+1<<" student name and number "<<endl;
    cin>>name>>stud_num;
    cout<<"Enter the name of the club "<<endl;
    cin>>cl;
counter++;
}
void getData(void){
cout<<"The student name and number are "<<name<<" and "<<stud_num<<" and their club and event venue are "
<<cl<<" and "<<ven<<endl;
}
void set_count(void){
    cout<<"The total students in the event are "<<counter<<endl;
}
// void delet(void){
//     cout<<"If you want to delete the student information, then enter that number"<<endl;
//     cin>>stud_num = delete;
//     cout<<stud_num;
// }
void people(void){
cout<<"The registered people are "<<endl;
}
 
};
int Manage :: counter;
int main()
{
    cout<<"Student Community Management Sysytem \n"<<endl;
    int n;
    cout<<"Enter the total student "<<endl;
    cin>>n;
    Manage Hasan;  // class Manage ka object hamne Hasan banaya ha;
    for (int i = 0; i < n; i++)
    {
        Hasan.setData();
        Hasan.getData();
    }
    Hasan.set_count();
    Hasan.people();

    return 0;
}