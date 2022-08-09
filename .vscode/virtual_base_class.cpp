#include<iostream>
using namespace std; 

//  ************ VIRTUAL BASE CLASS **********************
/* 
student ---> Test
student ---> Sports
Test + Sports ----> Result;  */ 

class Student{   // It is our virtual base class;
protected:
int roll_no;
public:
void set_num(int a){
    roll_no = a;
}
void print_num(void){
    cout<<"Your roll no is "<<roll_no<<endl;
}
};

class Test : virtual  public Student{
protected:
float maths, physics;
public:
void set_marks(float m1, float m2){
    maths = m1;
    physics = m2;
}
void print_marks(void){
    cout<<"Your result is here: "<<endl<<" Maths: "<<maths<<endl<<" Physics: "<<physics<<endl;
}
};

class Sports : virtual  public Student{
protected:
float score;
public:
void set_score(int sc){
    score = sc;
}
void print_score(void){
    cout<<"Your PT score is "<<score<<endl;
}
};

class Result : public Test, public Sports{
private:
float total;
public:
void display(void){
    total = maths + physics + score;
    print_num();
    print_marks();
    print_score();
    cout<<"Your total score is "<<total<<endl;
}
};

int main()
{
    Result Hasan;
    Hasan.set_num(20082013);
    Hasan.set_marks(94.5, 78.0);
    Hasan.set_score(8);
    Hasan.display();

    return 0;
}