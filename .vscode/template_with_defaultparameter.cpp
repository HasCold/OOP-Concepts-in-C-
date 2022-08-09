#include<iostream>
using namespace std; 

template<class T1 = int, class T2 = float, class T3 = char>
class Hasan{
public:
T1 x;
T2 y; T3 z;
Hasan(T1 a, T2 b, T3 c){
x = a;
y = b;
z = c;
}
void display(){
    cout<<"The value of x "<<x<<endl;
    cout<<"The value of y "<<y<<endl;
    cout<<"The value of z "<<z<<endl;
    
}
};

int main()
{
    Hasan<> stone(3,8.2,'C');
stone.display();
cout<<endl;
    Hasan<float, char, char> cold(9.3,'o','C');
cold.display();


    return 0;
}