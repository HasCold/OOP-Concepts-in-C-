#include<iostream>
#include<vector>
using namespace std; 

// **************** CPP STL VECTOR ******************

// cplusplus.com -- >> useful website;

template <class T>
void display(vector<T> &v){   // vector<int> ko ma ak data type ki tarah use karu ga;
    cout<<"Displaying this vector "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        //  cout<<v[i]<<" ";
         cout<<v.at(i)<< " ";  // both works same;
    }
    cout<<endl;
}

int main()
{
 // Ways to create a vector;
 vector <int> vec1;   // zero length integer vector;
//  vector <char> vec2(4);  // 4-element character vector;  
// vec2.push_back('5');
//  display(vec2);
//  vector <char> vec3(vec2); //  4-element character vector from vec2;
// vec3.push_back('18');
//  display(vec3);
 vector <int> vec4(5, 13);  // 5-element vector of 13s;
 display(vec4);
 cout<<vec4.size();  // You can find the size of that particular vector;
 int element, size = 5;   


    return 0;
}