#include<iostream>
using namespace std; 

class Base{
protected:  // protected ka matlab ha ak private variable ha jo inherit hoskta ha; Protected resembles to Private;
int a;
private:
int b;

};
/*                              VISIBILITY MODE TABLE; 
For a protected member:
                        Public Derivation        Private Derivation        Protected Derivation

1. Private members       Not inherited             Not inherited              Not inherited
2. Protected membrs       Protected                Private                     Protected
3. Public members         Public                    Private                     Protected
*/
class Derived : protected Base{   // Visibilty Mode if you dont declare then by default it is private;


};

int main()
{
  Base b;
  Derived d;
//   cout<<d.a<<endl;   Will not work since a is protected in both base as well as derived class

    return 0;
}