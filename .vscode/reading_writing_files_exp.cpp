#include<iostream>
#include<fstream>
using namespace std; 

int main()
{
    // We have  piped the file and our program to flow the data from this program to file; 
    ofstream hout("sample_files_two.txt");
cout<<"Enter your name "<<endl;
string name;
cin>>name;

// Writing a string to the file;
hout<<"my name is " + name;
hout.close();

ifstream hin("sample_files_two.txt");
string content;
// hin>>content;  // Yani is file ka material is content ma lado;
getline(hin, content); // getline() to copy the whole content of file in the wanted string;
cout<<"The content of this file is: "<<content<<endl;
hin.close();


    return 0;
}