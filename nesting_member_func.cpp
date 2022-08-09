#include<iostream>
#include<string>
using namespace std; 

 //*******************Nesting of member functions;************************

class Binary{
// Private:
  string s;     // Insab ma hame 's' required tha kuyn k 's' binary class ka ik private member ha. 
  public:       // By-Default class ma sab kuch private hota ha likhne ya na likhne se farq nahi parta; 
  void read(void);  // Public ko mention karna parta ha;
  void chk_bin(void);
void ones_compli(void);
void  display(void);
};
void Binary :: read(void){  // :: Scope Resolution Operator;
    cout<<"Enter the binary number "<<endl; // read(void) = ye kuch lega nahi kuyn k ma operation string pr krraha hu; 
    cin>>s;
}
void Binary :: chk_bin(void){  // string ke sare k sare indices ma jaye aur check kare;
    for (int i = 0; i < s.length(); i++) // s.length() string ma ak length function ka use ham karenge;
    {
       if (s.at(i)!= '0' && s.at(i)!= '1' )
       {
         cout<<"Incorrect binary format "<<endl;
         exit(0);
       }
              
    }
    
}
void Binary :: ones_compli(void){  // :: scope resolution operator bc ye binary class ma ha isliye use krraha ha;
chk_bin();
  for (int i = 0; i < s.length(); i++){
    if(s.at(i) == '0'){ // string ki i th index pr agr 0 ha tu use 1 krdo; 
       s.at(i) = '1';
    }
    else{
        s.at(i) = '0';
    }
  }
}
void Binary :: display(void){
    cout<<"Displaying your binary number "<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
cout<<"Hello! Yours Welcome "<<endl;
Binary b;    
b.read();
b.chk_bin();
b.display();
b.ones_compli();
b.display();
    return 0;
}