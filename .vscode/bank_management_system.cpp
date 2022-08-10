#include<iostream>
#include<windows.h>
#include<conio.h>
using namespace std; 

class Bank{
protected:
 int total;
string id;
struct person{
string name, ID, address;
int contact, cash;}
 person[100];
public:
Bank(){
    total=0;
}
void choice();
void Set_Data(){
    cout<<"Enter data of person "<<total + 1<<endl;
    cout<<"Enter name "<<endl;
    cin>>person[total].name;  // [total] = [zero] location ke name pr data store karaya jayega;
    cout<<"ID "<<endl;
    cin>>person[total].ID;
    cout<<"Address: "<<endl;
    cin>>person[total].address;
    cout<<"Contact: "<<endl;
    cin>>person[total].contact;
    cout<<"Total Cash: "<<endl;
    cin>>person[total].cash;
    total++;
}
void show();   // Function Prototype;
void upd(); 
void search(){
cout<<"Enter the ID of person those data you want to search "<<endl;
cin>>id;
for (int i = 0; i < total; i++)
{
    if (id == person[i].ID)
    {
    cout<<"Data of person "<<i + 1<<endl;
    cout<<"Name: "<<person[i].name<<endl;
    cout<<"ID: "<<person[i].ID<<endl;
    cout<<"Address: "<<person[i].address<<endl;
    cout<<"Contact: "<<person[i].contact<<endl;
    cout<<"Cash: "<<person[i].cash<<endl;
    break;
    }
     if (i == total - 1)  // eg:- if(0-4 == (total=5) - 1 ) simple explanation;
    {
        cout<<"NO such record found "<<endl;
    }
}
    Sleep(10000); // system pause for 10 seconds;
}
void transac();
void Del(){
cout<<"Press 1 to remove specific record "<<endl;
cout<<"Press 2 to remove full record "<<endl;
char pref;
pref = getch();
switch (pref)
{
case '1':
    cout<<"Enter ID of person that data you want to delete "<<endl;
    cin>>id;
    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            for(int j = i; j < total; j++){
            person[j].name = person[j+1].name;  // we will overwrite the data on another;
        person[j].ID = person[j+1].ID;
        person[j].address = person[j+1].address;
        person[j].contact = person[j+1].contact;
        person[j].cash = person[j+1].cash;
        // Hame 3rd pr 4th ka data 4th pr 5th ka data rewrite krna ha aur last ma ak data ko minus krdena ha;
        // Tu is keliye hum for loop chalayege;
        total--;
        break;
            }   
        }
        if (i == total-1)
        {
            cout<<"No such record found "<<endl;
        } 

    }
    
    break;
case '2' :
total = 0; // ALL your data is deleted;
cout<<"All record is deleted "<<endl;
Sleep(8000);
break;
default:
cout<<"Invalid Integer"<<endl;
    break;
}
}
};

// int Bank :: total;  // Default value initializes to zero; total ko hum class function se alag define krrahe ha take
// //  Bank total pass easily hosake;
void Bank :: choice(){
while (1)  // Pass the 1 in the conditon so that our program runs infinite time;
{
    start:
char ch;
cout<<"\n\n PRESS..!!"<<endl;
cout<<"1. Create new account "<<endl;
cout<<"2. View customers list"<<endl;
cout<<"3. Update information of existing account"<<endl;
cout<<"4. Check the details of an existing account"<<endl;
cout<<"5. For transactions"<<endl;
cout<<"6. Remove existing account "<<endl;
cout<<"7. Exit "<<endl;
ch = getch();
switch (ch)
{
case '1' :
    Bank :: Set_Data();
    break;
case '2' :
    Bank :: show(); // Function invoked(call);
    break;
case '3' :
    Bank :: upd();
    break;
case '4' :
    Bank :: search();
    break;    
case '5' :
    Bank :: transac();
    break;   
case '6' :
    Bank :: Del();
    break;
case '7':
// Exit Function
Sleep(3000);
system("CLS");
goto start;
break;
default:
cout<<"Invalid Integer "<<endl;
    break;
}
}
}

void Bank :: show(){  // Function Definition;
for (int i = 0; i < total; i++)
{
    cout<<"Data of person "<<i + 1<<endl;
    cout<<"Name: "<<person[i].name<<endl;
    cout<<"ID: "<<person[i].ID<<endl;
    cout<<"Address: "<<person[i].address<<endl;
    cout<<"Contact: "<<person[i].contact<<endl;
    cout<<"Cash: "<<person[i].cash<<endl;

}
Sleep(8000);

}

void Bank :: upd(){
cout<<"Enter the ID of person those data you want to update "<<endl;
cin>>id;
for (int i = 0; i < total; i++)
{
    if (id == person[i].ID)
    {
        cout<<" Previous Data "<<endl;
    cout<<"Data of person "<<i + 1<<endl;
    cout<<"Name: "<<person[i].name<<endl;
    cout<<"ID: "<<person[i].ID<<endl;
    cout<<"Address: "<<person[i].address<<endl;
    cout<<"Contact: "<<person[i].contact<<endl;
    cout<<"Cash: "<<person[i].cash<<endl;
    Sleep(8000); // Pause the system for 8 seconds;
    system("CLS");    
    cout<<"\n Enter new data "<<endl;
    cout<<"Enter name "<<endl;
    cin>>person[i].name;  // [total] = [zero] location ke name pr data store karaya jayega;
    cout<<"ID "<<endl;
    cin>>person[i].ID;
    cout<<"Address: "<<endl;
    cin>>person[i].address;
    cout<<"Contact: "<<endl;
    cin>>person[i].contact;
    cout<<"Total Cash: "<<endl;
    cin>>person[i].cash;
    break;
    }
     if (i == total - 1)  // eg:- if(0-4 == (total=5) - 1 ) simple explanation;
    {
        cout<<"NO such record found "<<endl;
    }
    
}

}

void Bank :: transac(){
cout<<"Enter the ID of person those data you want to transaction "<<endl;
cin>>id;
for (int i = 0; i < total; i++)
{
    if (id == person[i].ID)
    {
        char ch; int cash;
cout<<"Name: "<<person[i].name<<endl;
    cout<<"Address: "<<person[i].address<<endl;
    cout<<"Contact: "<<person[i].contact<<endl;
    cout<<"\nExisting Cash: "<<person[i].cash<<endl;
    cout<<"Press 1 to Deposit "<<endl;
    cout<<"Press 2 to Withdrawl "<<endl;
    ch = getch();
switch(ch){
case '1':
    cout<<"How much cash do you want to deposit?? "<<endl;
    cin>>cash;
    person[i].cash += cash;
    cout<<"Your new cash is "<<person[i].cash<<endl;
    Sleep(8000);
break;
case '2': 
    back:
    cout<<"How much cash do you want to withdraw?? "<<endl;
    cin>>cash;
    if (cash > person[i].cash)
    {
        cout<<"Your existing cash in your account is just "<<person[i].cash<<endl;
        Sleep(8000);
        goto back;
    }
    if(cash <= person[i].cash){
    person[i].cash -= cash;
    cout<<"Your new cash is "<<person[i].cash<<endl;
    Sleep(8000);
    }
break;
default:
    cout<<"\nInvalid Integer "<<endl;
break;
}
break;
    }
    if (i == total - 1)  // eg:- if(0-4 == (total=5) - 1 ) simple explanation;
    {
        cout<<"NO such record found "<<endl;
    }
    
    
}

}

int main()
{
    
Bank b;
b.choice();
// b.Set_Data();
// b.show();
// b.upd();
// b.search();
// b.transac();
// b.Del();

    return 0;
}