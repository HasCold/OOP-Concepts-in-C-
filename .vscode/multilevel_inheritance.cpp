#include<iostream>
using namespace std; 

class Student{
protected:
string roll_num;
public:
void set_number(string);
void get_number(void);

};
void Student :: set_number(string r){
    roll_num = r;
}
void Student :: get_number(void){
    cout<<"Your roll number is "<<roll_num<<endl;
}
// Publically Inherit;
class Exam : public Student{
protected:
float maths, physics;
public:
void set_data(float, float);
void get_marks(void);

};
void Exam :: set_data(float m1, float m2){
    maths = m1;
    physics = m2;
}
void Exam :: get_marks(void){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
}

class Result : public Exam{
float percentage;
public:
 void display_result(){
 get_number();
 get_marks();
 cout<<"Your percenatge is "<<(maths + physics)/2<<"%"<<endl;
 
 }
};

int main()
{
    /* Notes:--
    If we are inheriting B from A and C from B; [A ---> B ---> C] 
1. A is the Base class for B and B is the Base class for C ;
2. A--->B--->C is called Inheritance path;
    */
    Result Hasan;
    string r;
    float m1, m2;
    cout<<"Enter your roll number "<<endl;
    cin>>r;
    cout<<"Enter the marks you have secure in maths and physics "<<endl;
    cin>>m1>>m2;
    Hasan.set_number(r);
    Hasan.set_data(m1,m2);
    Hasan.display_result(); 


    return 0;
}