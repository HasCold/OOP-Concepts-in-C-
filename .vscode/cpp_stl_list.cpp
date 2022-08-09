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

list1.push_back(1);
list1.push_back(5);
list1.push_back(7);
list1.push_back(1);
list1.push_back(9);
list1.push_back(32);
display(list1);

// iter = list1.begin();  // iterator list1 ke pehle element ko point karega;
// cout<< *iter<<" ";
// iter++;

// **************Removing elements from the list ***********************;

list1.pop_back();  // by using pop back()-->> Delete last element;
display(list1);
// list1.pop_back();
// display(list1);   // back -->> Access first element
// list1.pop_front(); // front -->> Access last element
list1.remove(1); // If we remove the elements from the middle;
display(list1);


    list <int> list2(3);  // Empty list of size 3; we have 3 elements of empty values;
list <int> :: iterator iter;
iter = list2.begin();
*iter = 45;
iter++;
*iter = 6;
iter++;
*iter = 9;
iter++;
display(list2);


    return 0;
}