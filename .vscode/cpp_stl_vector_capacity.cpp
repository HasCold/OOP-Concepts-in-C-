#include<iostream>
#include<vector>
using namespace std; 

template <class T>
void display(vector <T> &v){
    for (int i = 0; i < v.size(); i++) 
    {
        cout<<"The size: "<<v.size()<<endl;
        cout<<"The capacity: "<<v.capacity()<<endl;
        cout<<"The maximum size: "<<v.max_size()<<endl;
        
    }
    
}

int main()
{
    int element;
    cout<<"Enter the size to this vector "<<endl;
    cin>>element;
    vector <int> vec1(element);
    display(vec1);

    return 0;
}