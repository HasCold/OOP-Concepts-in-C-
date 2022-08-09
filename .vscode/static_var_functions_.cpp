#include<iostream>
using namespace std; 

class employee{
int Id;  // agar hum ne static variable nahi banaya hota tab bhi kaam krjata lkn hame count = 0 krna parta  
static int count; // kuyn k har object ka apna count ha agar static krdete ha tu har object ka apna count 
public:        // nahi hota ye count sare objects share krta ha; iska mtlb ap ik aisa variable bana rahe ha
// jo class se joint hojata ha;  
void setData(void){
    cout<<"Enter the Id "<<endl;
    cin>>Id;
    count++;
}
void getData(void){
    cout<<"The Id of this employee is "<<Id<<" and this is employee number "<<count<<endl;
}
static void getcount(){   // Agr apko class ke name se run karana ha yani kisi object ki zaroorat na pare tu static 
    cout<<"The value of count "<<count<<endl;  // function banayege phr; 
}
};

int employee :: count;  // Default value initializes to zero; count ko hum class function se alag define krrahe ha take
//  total employee count pass easily hosake 
int main()
{
    // Count is the static data member of class employee;
    // static variable sirf ak hota ha aur usko sare varible share krte hai;
    employee Hasan, Umer, Farooq;
// Hasan.Id = 1;   cannot do this bc Id and count are private;
// Hasan.count = 4;

Hasan.setData();
Hasan.getData();
employee :: getcount();

Umer.setData();
Umer.getData();
employee :: getcount();

Farooq.setData();
Farooq.getData();
employee :: getcount();

    return 0;
}