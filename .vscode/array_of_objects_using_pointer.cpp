#include<iostream>
using namespace std; 

class ShopItem{
int id;
float price;
public:
void setData(int a, int b){
    id = a;
    price = b;
}
void GetData(void){
    cout<<"The Code of this item is "<<id<<endl<<"The Price of this item is "<<price<<endl;
}
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int[34];  // HUm compiler se kah rahe ha ke 34 integer tak krne ki memory allocate krdio;
    // 1. General stroe item;
    // 2. Veggie store item;
    // 3. Hardware item; 
    ShopItem *ptr = new ShopItem[size]; // SHop data type ha jo hamari class ha 
ShopItem *ptrTemp = ptr; // Integer Pointer;
int q;
float p;
for (int  i = 0; i < size; i++)
{
    cout<<"Enter the id and price of item "<<i+1<<endl;
    cin>>q>>p;
    // (*ptr).setData(q,p);
ptr->setData(q,p);
ptr++;
}
for (int i = 0; i < size; i++)
{
    cout<<"Item number: "<<i+1<<endl;
    ptrTemp->GetData();
    ptrTemp++;
}

    return 0;
}