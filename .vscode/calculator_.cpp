#include<iostream>
#include<cmath>
using namespace std; 
 
  // Making a Scientific Calcultor Using OOP; 

class SimpleCal{
protected:
int a, b, c;
public:
void set_num(int num1, int num2, int num3){
 a = num1;
 b = num2;
 c = num3;
}
void display(){
    cout<<"You have entered the value of a, b and c is "<<a<<", "<<b<<" and "<<c<<endl;
}
void Simplify(){
        int add, subt, multi, divide, condition; 
        cout<<"Press addition, subtraction, multiplication, division \n"<<endl;
   add = a + b + c;
subt = a - b - c;
multi = a * b * c;
divide = a/b;
    cout<<"Press 1 for addition, 2 for subtraction, 3 for multiplication and 4 for division "<<endl;
    cin>>condition;
    if (condition == 1)
    {
        cout<<"Tha addition of these values is "<<add<<endl;
    }
    else if(condition == 2){
          cout<<"The subtraction of these values is "<<subt<<endl;
    }
    else if(condition == 3){
          cout<<"The multiplication of these values is "<<multi<<endl;
    }
    else{
        cout<<"The division of these values is "<<divide<<endl;
    }
    
}
};

class ScientificCal : public SimpleCal{
protected:
int p1, num4;
float  num5, num6;
int cond;
public:
void setData(void){
cout<<"Enter the value of number for their square and cube "<<endl;
cin>>num4;
}
void Power_func(){
cout<<"You have entered the number "<<num4<<endl;
cout<<"Press 2 for power square Or Press 3 for power cube "<<endl;
cin>>cond;
if (cond == 2)
{
    num5 = pow(num4,2);
    cout<<"The square power of your number is "<<num5<<endl;
}
else{
    cout<<"The cube power of your number is "<<pow(num4,3)<<endl;
}
}
void Sqr_Root(){
cout<<"Enter the number to findout their root "<<endl;
cin>>num6;
cout<<"Press 2 for square root OR press 3 for cube root "<<endl;
cin>>p1;
if (p1 == 2)
{
    cout<<"The square root of the number is "<<sqrt(num6)<<endl;
}
else{
cout<<"The cube root of the number is "<<cbrt(num6)<<endl;
}
}
void Trignometric(){
    float x, y;
    cout<<"Enter the two number for trignometric values "<<endl;
    cin>>x>>y;
    cout<<"cos("<<x<<") : "<<cos(x)<<endl;
    cout<<"sin("<<x<<") : "<<sin(x)<<endl;
    cout<<"tan("<<x<<") : "<<tan(x)<<endl;
    cout<<"acos("<<x<<") : "<<acos(x)<<endl;  // acos ===>> It is same as the inverse of cosine;
    cout<<"asin("<<x<<") : "<<asin(x)<<endl;  //  asin ===>> It is same as the inverse of sine;
    cout<<"atan("<<x<<") : "<<atan(x)<<endl;  // atan ===>> It is same as the inverse of tangent;

cout<<"atan2("<<x<<" , "<<y<<") : "<<atan2(x,y)<<endl;
}
};

class HybridCal : public SimpleCal , public ScientificCal{
protected:
char s[500], c[];
public:
void Ans_func(void){
cout<<"What type of inheritance are you using "<<endl;
gets(s);
cout<<s<<"\n"<<endl;
cout<<"Which mode of inheritance are you using "<<endl;
gets(c);
cout<<"\n"<<c<<endl;
}

};

int main()
{
    SimpleCal Has;
    HybridCal Cold, Stone;
    int x, y, z;
    cout<<"Enter the three numbers "<<endl;
    cin>>x>>y>>z;
    Has.set_num(x,y,z);
    Has.display();
    Has.Simplify();
Cold.setData();
Cold.Power_func();
Cold.Sqr_Root();
Cold.Trignometric();
Stone.Ans_func();

    return 0;
}