#include<iostream>
using namespace std; 

class complex{
   int a, b;
   public:
   void setnumber(int n1, int n2){
    a = n1;
    b = n2;
   }
   friend complex sumcomplex(complex o1, complex o2); // sumcomplex ko complex class se written permission milchuki ha;
   void printnumber(){     // koi arguments nahi lega; sumcomplex class function ka member object nahi banega:
    cout<<"Your number is "<<a<<" + i"<<b<<endl;
   }
};

/* Friend Function :- Compiler ak police ki thara hota ha, compiler kisi bhi class k private data ko kisi dosre function
ko use nahi karne deta ha */ 

complex sumcomplex(complex o1, complex o2){  //ak function banauga jo complex return karega aur wo do complex object
    complex o3;                     // lega o1 and o2; sumcomplex ko complex class ne permission de rakhi ha uske 
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b)); // private data ko access krne ki
return o3;
}

int main()
{
   complex c1, c2, sum;
   c1.setnumber(5,8);
   c1.printnumber();
   c2.setnumber(3,4);
   c2.printnumber();
    sum = sumcomplex(c1, c2);
    sum.printnumber();

    return 0;
}
/* Properties of Friend Function;

1. Not in the scope of class;
2.Since it is not in the scope of class, it cannot be called from the object of that class. c1.sumcomplex() == invalid; 
3. Can be invoked without the help of any object;
4. Usually contains the objects as arguments; complex sumcomplex(complex o1, comoplex o2)
5. Can be declared inside public or private section of the class;
6. It cannot access the members directly by their names and need object_name.member_name to access any member; 
*/ 