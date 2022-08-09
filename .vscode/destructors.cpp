#include<iostream>
using namespace std; 

// Destrcutors jo hota wo na hi koi arguments leta ha aur na hi koi value return krta ha;

int count = 0; // This is our global varaiable;
class Num{
public:
Num(){  // Constructor se murad jese hi object banega wsse hi run hogae ga;
    count++;
    cout<<"This is a time when constructor is called for object number "<<count<<endl;
}
~Num(){   // Destructor representation; 
    cout<<"This is the time when my destrcuctor is called for object number "<<count<<endl;
    count--;  // count ko ham usi hisab se maintain karrahe ha;
}
};

int main()
{
    cout<<"We are inside our main function "<<endl;
cout<<"Creating first object n1 "<<endl;

Num n1;
{  // Here we have created a block; yahan pr n2 aur n3 hi block level ma include ha tu block k end hone pe hi n2 n3
//  destruct honge;
cout<<"Entering the block "<<endl;  
    cout<<"Creating two more objects "<<endl;
    Num n2, n3; // Yahan pr n2, n3 ka constructor call horaha ha;
cout<<"Exiting the block "<<endl;
// koi bhi object bana aur uska istamaaal nahi ha aur agr compiler ko pata chala tu wo usko wahi ke wahi destruct krdega;
}
cout<<"Back to the main "<<endl;
// back to main k baad hamara n1 bhi destruct hogae ga;
// Compiler ko pata chalgaya k object ki zaroorat nahi tu 
// wo destructor ko call krdega;


    return 0;
}