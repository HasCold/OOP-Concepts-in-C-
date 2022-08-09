#include<iostream>
#include<vector>
using namespace std; 

void display(vector <int> &v1){
    vector <int> :: iterator iter;
for (iter = v1.begin(); iter != v1.end() ; iter++)
    {
        cout<<*iter<<" ";
    }
cout<<endl;
}

int main()
{
    vector <int> vec1(3, 100);  // 3 ints with a value of 100;
    vector <int> vec2(6, 5);  //  6 ints with a value of 5;
     vector <int> :: iterator iter;
    // for (iter = vec1.begin(); iter != vec1.end() ; iter++)
    // {
    //     cout<<*iter<<" ";
    // }
    display(vec1);
    cout<<"The vec2 has been swaped from vec1 "<<endl;
    vec1.swap(vec2);
    display(vec2);
    cout<<"The vec1 has been swaped from vec2 "<<endl;
    display(vec1);

    return 0;
}