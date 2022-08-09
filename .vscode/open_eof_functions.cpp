#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out;
    out.open("sample_files_two.txt");
    out<<"This is me \n";
    out<<"This is also me \n";
    out<<"This is me also\n";
    out<<"This is me and you \n";
    out.close();  // This is good way to also close a file ;

    ifstream in;
    in.open("smaple_files_two.txt");
    string st, st2,st3;
    // in>>st>>st2;
// getline(in,st);
// getline(in,st2);
// getline(in,st3);
while (in.eof() == 0)  // eof --->> means end of file function;
{
    getline(in,st);
    cout<<st<<endl;
}
    // cout<<st<<endl<<st2<<endl<<st3<<endl;
    in.close();


    return 0;
}