#include<iostream>
#include<cstring>
using namespace std; 


// It is a abstract base class because we included more features in our inherited derived class;
class CWH{
    protected:  // Isko humne protected banaya ha take inherit karske aur koi direct access bhi na kare koi;
    string title;
    float rating;
    public:
CWH(string s, float r):title(s),rating(r){  // Constructor;
    title = s;
    rating = r;
}
 virtual void display(){  // Agr ma virtual likhta hu tab tu derived classes ke apne display() invoke honge lkn agr nahi
 // likhta tu sirf base class ka display() invoke hoga;
    cout<<"Bogus Code "<<endl;
};
};

class CWHVideo : public CWH{
protected:
int videolength;
public:
CWHVideo(string s, float r, int vl):CWH(s,r){
    videolength = vl;
}
void display(){
    cout<<"This is an amazing video with title "<<title<<endl;
    cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
    cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
};

};

class CWHText: public CWH{
protected:
int words;
public:
CWHText(string s, float r, int wc):CWH(s,r){
    words = wc;
}
void display(){
        cout<<"\nThis is an amazing text tutorial with title "<<title<<endl;
    cout<<"Rating of this tutorial: "<<rating<<" out of 5 stars"<<endl;
    cout<<"Number of words in this text tutorial is: "<<words<<" words"<<endl;
};

};

int main()
{
   string title;
   float rating, vlen;
   int words;

   // For Code with Hasan Video;
title = "Django Tutorial";
vlen = 4.56;
rating = 4.9;
CWHVideo djvideo(title,rating,vlen);
// djvideo.display();

// For Code with Hasan Text;
title = "Django Text Tutorial";
words = 334;
rating = 4.5;
CWHText djtext(title,rating,words);
// djtext.display();

CWH * ptr[2];

ptr[0] = &djvideo;
ptr[1] = &djtext;

ptr[0]->display();  // If we remove the virtual from base class void display() so it will only show the void display() 
// of base class;  
ptr[1]->display(); // Agr compiler ko derived class ma display() nahi mila tu wo automatically base class ka display()
// run krdega as explained below in rule no.5;     

    return 0;
}
/*
Rules for virtual funhction;

1. They cannot be static;
2. They are accessed by object pointers;
3. Virtual functions can be a friend of another class;
4. A virtual function in base class might not be used;
5. If a virtual function is defined in base class, there is no necessity of redefining it in the derived class; 

*/