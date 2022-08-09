#include<iostream>
#include<cmath>
using namespace std; 

// Dynamic initialization of objects using constructors;
// dynamically matlab jab program run hoaraha ha 

class BankDeposit{
public:
int principal, year;
float interestrate, returnValue;

BankDeposit(){}; // AK blank constructor bana bhi lazmi ha wrna error dega hame compiler;
BankDeposit(int p, int y, float r); // r can be a value like 0.04;
BankDeposit(int p, int y, int r); // r can be a value like 14;
void show();

};

BankDeposit :: BankDeposit(int p, int y, float r){
    principal = p;
    year = y;
    interestrate = r;
    returnValue = principal;
for (int i = 0; i < y; i++)
{
    returnValue = returnValue * (1 + interestrate);
}
}

BankDeposit :: BankDeposit(int p, int y, int r){
    principal = p;
    year = y;
    interestrate = float(r)/100;
    returnValue = principal;
for (int i = 0; i < y; i++)
{
    returnValue = returnValue * (1 + interestrate);
}
}

void BankDeposit :: show(){
    cout<<endl<<"Principal amount was "<<principal
    <<". Return value after "<<year
    <<" years is "<<returnValue<<endl;
}

int main()
{
    BankDeposit d1,d2,d3;
    int pr, yr;
    float ir;  // r for decimal form like 0.04;
    int R;    // R for percentage form like 40% ;
    cout<<endl<<"Enter the value of principal amount, your year and the amount of interest do you want "<<endl;
    cin>>pr>>yr>>ir;
    d1 = BankDeposit(pr, yr, ir); // BankDeposit yahan pr hamara ak data type banchuka ha; 
    d1.show();

 cout<<endl<<"Enter the value of principal amount, your year and input the integer amount of interest do you want "
 <<endl;
    cin>>pr>>yr>>R;
    d2 = BankDeposit(pr, yr, R); // BankDeposit yahan pr hamara ak data type banchuka ha;
    d2.show();

    return 0;
}