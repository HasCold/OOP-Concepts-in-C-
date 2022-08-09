#include<iostream>
#include<vector>
#include<list>
#include<map>
#include<string>
using namespace std; 

// Map is an associative array;

int main()
{
    map <string, int> marksMap;
    marksMap["Hasan"] = 98;
    marksMap["Talah"] = 44;
    marksMap["Ali"] = 33;
    marksMap["Umer"] = 88;

    marksMap.insert({{"Kozume", 169}, {"Kuroo", 187}});
    map <string, int> :: iterator iter;
    // begin() -->> returns an iterator to the beginning; end() -->> returns an iterator to the end;
    for ( iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    // first means with the help of *iter we can reference our first key value then from second is the value of *iter;

cout<<"The size is: "<<marksMap.size()<<endl;
cout<<"The max_size is: "<<marksMap.max_size()<<endl;
cout<<"The empty's return value is: "<<marksMap.empty()<<endl;

    return 0;
}