#include<iostream>
using namespace std; 

template<class T>
class Hasan{
public:
T data;
Hasan(T a){
    data = a;
}
void display();

};

template<class T>  // Function ki functionality same rahegi agr class k bahr likhege;
void Hasan<T> :: display(){
    cout<<data;
}

void func(int a){
    cout<<"This is a first function "<<a<<endl;
}

template<class T>
void func(T a){
    cout<<"This is a templatized func "<<a<<endl;
}

template<class T>
void func1(T a){
    cout<<"This is a templatized func "<<a<<endl;
}

int main()
{
//     Hasan<float>obj(4.7);
//     Hasan<char>obj1('d');
//     cout<<obj.data<<endl;
// obj.display();cout<<endl;
// obj1.display();

func(5); // Exact match takes the highest priority;
func1(8); // Exact match takes the highest priority;
    return 0;
}