#include<iostream>
#include<string>
#include<ctime>

using namespace std; 

int main()
{
    time_t result = time(nullptr);
    cout << ctime(&result);


    return 0;
}