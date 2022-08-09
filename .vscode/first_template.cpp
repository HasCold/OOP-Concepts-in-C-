#include<iostream>
using namespace std; 

template <class T>  // jahan me T use kraha hu wo ak varaiable ha aur use baad ma specify karunga;
// Mane data type ko hi pass krdiya ha; mane apni class se kaha konsa data type use krna ha wo ma tmhe baad 
// ma batadunga;
// USE : - jahan mjhe kisi cheez ke 10 classes bbanae parti wahan mane 1 class bana k define krdiya
class Vector{
public:
T * arr;
int size;
// new keyword. The new operator is an operator which denotes a request for memory allocation on the Heap. 
// If sufficient memory is available, new operator initializes the memory and returns the address of the newly allocated 
// and initialized memory to the pointer variable. When you create an object of class using new keyword(normal new).
Vector(int m){   
    size = m;
    arr = new T[size];
}
T docProduct(Vector &v){
T d = 0;
for (int i = 0; i < size; i++)
{
    d += this->arr[i] * v.arr[i];
}
    return d;

}
};

int main()
{
    int m;
    cout<<"Enter the size do you want "<<endl;
    cin>>m;
    // Vector v1(m);
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;
    // Vector v2(m);
    // v2.arr[0] = 1;
    // v2.arr[1] = 0;
    // v2.arr[2] = 1;
    // int a = v1.docProduct(v2);
    // cout<<a<<endl;

// Float values;
     Vector <float> v1(m); // ma T ko int specify karna chahta hu; Is baar humne custom data type de rakha ha;
    v1.arr[0] = 4.2;
    v1.arr[1] = 3.2;
    v1.arr[2] = 1.2;
    Vector <float> v2(m); // ma T ko float specify karna chahta hu;
    v2.arr[0] = 0.1;
    v2.arr[1] = 0.20;
    v2.arr[2] = 1.34;
    float a = v1.docProduct(v2);
    cout<<a<<endl;


    return 0;
}