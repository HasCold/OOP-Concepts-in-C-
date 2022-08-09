#include<iostream>
#include<vector>  // If you use stl then this library will be added;
using namespace std; 

// **************** C++ STL CONTAINERS ***************
// cplusplus.com -- >> useful website;

void display(vector<int> &v){   // vector<int> ko ma ak data type ki tarah use karu ga;
    for (int i = 0; i < v.size(); i++)
    {
        //  cout<<v[i]<<" ";
         cout<<v.at(i)<< "";  // both works same;
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    int element, size;
    cout<<"Enter the size of your vector "<<endl;
    cin>>size;
for (int i = 0; i < size; i++)
{
    cout<<"Enter an element to add to this vector: ";
    cin>>element;
    vec1.push_back(element); // push_back() -->> add elemet at the end
    // These functions you could find on cplusplus.com website;
}
vec1.pop_back();  //  Delete last element;
display(vec1);
// begin()  Return iterator to beginning;
vector <int> :: iterator iter = vec1.begin();  // we have pointed our first element;
vec1.insert(iter+2, 570); // And alter with the 570; But if you want to insert 2 or more copies then type the number
//  right after the pointer;  (iter+1, 5, 570);
display(vec1);


    return 0;
}