#include<iostream>
#include<vector>
#include<list>
using namespace std; 

void display(list <int> &lst){
    list <int> :: iterator it;
for (it = lst.begin(); it != lst.end(); it++)  // end()-->> Return iterator to end;
{
    cout<<*it<<" ";
      
}
cout<<endl;
}

int main()
{
    list <int> list1;  //  List of 0 length;
list1.push_back(1);  // push_back() -->> Add element at the end;
list1.push_back(5);
list1.push_back(7);
list1.push_back(1);
list1.push_back(9);
list1.push_back(32);
display(list1);

// Reversing the list;
list1.reverse(); cout<<"Reversing the list: ";
display(list1);

// // Sorting the list;

// list1.sort(); cout<<"Sorting the list1 elements: "<<endl;
// display(list1);

    list <int> list2(3);  // Empty list of size 3; we have 3 elements of empty values;
list <int> :: iterator iter;
iter = list2.begin();
*iter = 45;
iter++;
*iter = 6;
iter++;
*iter = 9;
iter++; cout<<endl;
display(list2);
 list2.sort();  cout<<"Sorting the list2 elements: "<<endl;
 display(list2);


list1.sort();
list2.sort();
cout<<"\nMerging the list1 and list2: "<<endl;
list1.merge(list2);
display(list1);

    return 0;
}