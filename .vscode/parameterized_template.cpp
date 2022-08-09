#include<iostream>
using namespace std; 

// **** CLASS  TEMPLATE WITH MULTIPLE  PARAMETERS ******

/*
template<class T1, class T2>{  // T1 and T2 may be int float char double and boolean;
    // body;
}
*/
template<class T1, class T2> // It gives a luxury to you to write a short program; We can also add more than two or more
class Myclass{   // custom data types;
public:
T1 data1;
T2 data2;

Myclass(T1 a, T2 b){
    data1 = a;
    data2 = b;

}
void display(){
    cout<<this->data1<<endl<<this->data2<<endl;
}

};

int main()
{
    char Data1; float Data2;
    cout<<"Enter the value for data1 and data2 "<<endl;
    cin>>Data1>>Data2;
  Myclass<char, float> obj(Data1, Data2); // We have specify the data type in our class template
  obj.display();  

    return 0;
}