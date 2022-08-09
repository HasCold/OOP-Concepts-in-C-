#include<iostream>
using namespace std; 

//  **************** Memory allocation by using array*********************
class shop{
int itemId[10];
int itemPrice[10];
int counter; // counter Track karega k kitna item mere already add hochuke ha;

public:
void initcounter(void) {counter = 0;}  // function banaya jis ma counter = 0 ha aur wo har object ki value zero karega
void setprice(void);                //jo hhum banye ge;
void Displayprice(void);
};
void shop :: setprice(void){
    cout<<"Enter I.D. of your item no. "<<counter+1<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your item  "<<endl;
    cin>>itemPrice[counter];
    counter++;
}
void shop :: Displayprice(void){
    for (int i = 0; i < counter; i++)
    {
       cout<<"The price of item with I.D. "<<itemId[i]<<" is "<<itemPrice[i]<<endl;
    }
}

int main()
{
    shop medical;
    medical.initcounter();
    // medical.setprice();
    for (int i = 0; i < 3; i++)
    {
        medical.setprice();
    }
    
    medical.Displayprice();

    return 0;
}