#include<iostream>
#include<cstring>
#include<conio.h>
#include<windows.h>
using namespace std; 

class Employee_manage{
protected:
    string username, password;
public:
void User_display(void){
    cout<<"\n\t\tEmployee Management System"<<endl;
    cout<<"\n\t\tSign Up"<<endl;
    cout<<"\n\t\tEnter Username: ";
cin>>username;
    cout<<"\n\t\tEnter Password: ";
cin>>password;
        cout<<"\n\t\tYour I.D. is creating"<<endl;
        for (int i = 0; i < 6; i++)
        {
            cout<<".";
            Sleep(1000);  // 1000 means 1 second in sleep function it will pause for 1 sec and then run; 
        }
            cout<<"\n\t\tYour I.D. is created successfully "<<endl;
    Sleep(2000);
        system("CLS");
}
};

class Employee_Details : virtual public Employee_manage{ // It is also a abstract base class; 
public:
struct emp{
string name, ID, address;  // All these data members should be invoked by their struct object which is emp;
    int contact, salary; 
};
 emp e[100];  // Globally access variable;
int total = 0;
};

void clear(void){
    cout<<("CLS");
};
class Login_User : virtual public Employee_manage, virtual public Employee_Details{
protected:
string username1, password1;
public:
Login_User(){
    start:
cout<<"\n\t\tEmployee Management System"<<endl;
    cout<<"\n\t\tLogin"<<endl;
    cout<<"Username: ";
    cin>>username1;
    cout<<"Password: ";
    cin>>password1;

    if (username1 == username && password1 == password)
    {
        system("CLS");
        char user;
        // while(1) It is an infinite loop which will run till a break statement is issued explicitly.
        //  Interestingly not while(1) but any integer which is non-zero will give a similar effect as while(1). 
        //  Therefore, while(1), while(2) or while(-255), all will give infinite loop only. while(1) or
        //   while(any non-zero integer) { // loop runs infinitely }
        while(1){
            cout<<"\n\nPress 1 to enter data "<<endl;
            cout<<"\n\nPress 2 to show data "<<endl;
            cout<<"\n\nPress 3 to search data "<<endl;
            cout<<"\n\nPress 4 to update data "<<endl;
            cout<<"\n\nPress 5 to delete data "<<endl;
            cout<<"\n\nPress 6 to logout "<<endl;
            cout<<"\n\nPress 7 to exit "<<endl;
        user = getch();  // with the help of this library we get the character;
        switch (user)
        {
        case 1:
        //  Enter Data
    int choice;
    cout<<"How many employees data do you want to enter? ";
    cin>>choice;
    for (int i = total; i < total + choice; i++)
    {
        cout<<"Enter data of employee: "<<i + 1<<endl;
        cout<<"Enter Employee name: ";
        cin>>e[i].name;
        cout<<"I.D: ";
        cin>>e[i].ID;
        cout<<"Address: ";
        cin>>e[i].address;
        cout<<"Contact: ";
        cin>>e[i].contact;
        cout<<"Salary: ";
        cin>>e[i].salary;
    }
    total = total + choice;
            break;
        case 2:
    //                      Show Data
                if (total != 0)
                {
                    for (int i = 0; i < total; i++)
                    {
                        cout<<"Data of Employee: "<<i + 1<<endl;
                        cout<<"Employee Name: "<<e[i].name<<endl;
                        cout<<"I.D: "<<e[i].ID<<endl;
                        cout<<"Address: "<<e[i].address<<endl;
                        cout<<"Salary: "<<e[i].salary<<endl;
                        cout<<"Contact "<<e[i].contact<<endl;
                    }
                    
                }
                else{
                    cout<<"Your record is empty "<<endl;
                }
                
                
            break;
        case 3:
                //              Search Data
                   if (total != 0)
                   {
                    string id;
                    cout<<"Enter ID of data which you want to search "<<endl;
                    cin>>id;
                    for (int i = 0; i < total; i++)
                    {
                        if (id == e[i].ID)
                        {
                        cout<<"Data of Employee: "<<i + 1<<endl;
                        cout<<"Employee Name: "<<e[i].name<<endl;
                        cout<<"I.D: "<<e[i].ID<<endl;
                        cout<<"Address: "<<e[i].address<<endl;
                        cout<<"Salary: "<<e[i].salary<<endl;
                        cout<<"Contact "<<e[i].contact<<endl;
                        break;
                        }
                        if (i == total-1)
                        {
                            cout<<"NO such record found "<<endl;
                        }
            
                    }                   
                   }
                   else{
                    cout<<"Your record is empty "<<endl;
                   }
                
            break;
         case 4:
              //       Update data
              if (total != 0)
              {
                    string id;
                    cout<<"Enter ID of data which you want to update "<<endl;
                    cin>>id;
                                        for (int i = 0; i < total; i++)
                    {
                        if (id == e[i].ID)
                        {
                        cout<<"Previous Data"<<endl;    
                        cout<<"Data of Employee: "<<i + 1<<endl;
                        cout<<"Employee Name: "<<e[i].name<<endl;
                        cout<<"I.D: "<<e[i].ID<<endl;
                        cout<<"Address: "<<e[i].address<<endl;
                        cout<<"Salary: "<<e[i].salary<<endl;
                        cout<<"Contact "<<e[i].contact<<endl;

                            cout<<"Enter new data: "<<endl;
                                    cout<<"Enter Employee name: ";
                                    cin>>e[i].name;
                                    cout<<"I.D: ";
                                    cin>>e[i].ID;
                                    cout<<"Address: ";
                                    cin>>e[i].address;
                                    cout<<"Contact: ";
                                    cin>>e[i].contact;
                                    cout<<"Salary: ";
                                    cin>>e[i].salary;

                        break;
                        }
                        if (i == total-1)
                        {
                            cout<<"NO such record found "<<endl;
                        }
            
                    }                   

              }
              else{
                cout<<"Your record is empty "<<endl;
              }             
            break;   
        case 5:
            //   Delete Data;
            if (total != 0)
            {
                char user;
                cout<<"Press 1 to delete full record "<<endl;
                cout<<"Press 2 to delete specific record "<<endl;
                user = getch();
                if (user == '1')
                {
                    total = 0;
                    Sleep(2000);
                    cout<<"All record is deleted...!!! "<<endl;
                }
                else if(user == '2'){
                    string id;
                    cout<<"Enter ID of data which you want to delete "<<endl;
                    cin>>id;
                    for (int i = 0; i < total; i++)
                    {
                        if (id == e[i].ID)  // Here we have to rewrite the data;
                        {
     // Here we are doing the all data at one step back; so we have to use the loop;
                    for(int j = 1; j < total; j++){                        
                            e[j].name = e[j+1].name;
                            e[j].ID = e[j+1].ID;
                            e[j].address = e[j+1].address;
                            e[j].contact = e[j+1].contact;
                            e[j].salary = e[j+1].salary;
                            total--;
                            break;
                            cout<<"Your recorded data is deleted "<<endl;
                    }
                    if (i == total - 1)
                    {
                        cout<<"No such record found "<<endl;
                    }
                    
                        }
                        
                    }
                    
                }
            }
            else{
                cout<<"Your record is empty "<<endl;
            }
            
            break;
        case 6:
            goto start;
            break;
        case 7:
        goto start;
        break;    

        default:
        cout<<"\aInvalid Function "<<endl;  // \a is for error sound;
            break;
        }
        }

    }
            else if (username != username1 && password != password1)
            {
        cout<<"Your username and password are incorrect "<<endl;
        Sleep(3000);
        goto start;
    }

    else if(username1 != username){
        cout<<"Your username is incorrect "<<endl;
    Sleep(3000);  // 3000 means 3 seconds;
    goto start;  // If our condition is false then start the constructor again; 
    }
     else if(password1 != password){
        cout<<"Your password is incorrect "<<endl;
        Sleep(3000);
        goto start;
    }
}

};


int main()
{
   Employee_manage hasan;
   hasan.User_display();

Login_User();

    return 0;
}