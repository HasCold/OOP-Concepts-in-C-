#include<iostream>
#include<fstream>
using namespace std; 

// The useful  classes for working with files in C++ are:
// 1. fstream;
// 2. ifstream;-->> derived from fstreambase 
// 3. ofstream;-->> derived from fstreambase

// In order to work with files in C++, you have to open it. Primarily, There are 2 ways to open a file;
// 1. Using a comstructor;
// 2. Using the member function open() of the class

int main()
{
    // Opening file By using constructor and writing it;
    string st = "Muhammad Hasan ALi";  // This has been shown in our sample_for_files.txt;
    string st2;
    // ofstream is a class from fstream and out is a ofstream object we created; 
    ofstream out("sample_for_files.txt"); // Write Operation;
out<<st;

    // Opening file By using constructor and reading it;
    ifstream in("sample_files_two.txt"); // Read Operation;
    // in -->> in stream object;
getline(in, st2); // (in stream object, aur usi k sath apko wo stream deni paregi jis ma ap lena chate ho );
// getline(in, st2); // ma jitni bar getline() run krta chala jaunga utni bar mjhe new line print hokr mil gae gi;
cout<<st2;


    return 0;
}