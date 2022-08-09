#include<iostream>
#include<functional>
#include<algorithm>
using namespace std; 



int main()
{
    /* Function Ojects (Functor):- Function wrapped in a class so that it available like an object; */

    // Website:-  Function objetcs cppreference.com useful link to study more;

    int arr[] = {33,1,55,2,8,12,25};
    sort(arr, arr+7); // sort in by-default ascending order;
    sort(arr, arr+7, greater <int> ());  // sort in descending order; we have passed the function object in our sort;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}