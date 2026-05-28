#include <iostream>
#include <cstring>
using namespace std;

class ytvid{
    protected:
    string title;
    float rating;
    public:
    ytvid(string t, float r){
        title= t;
        rating = r;
    }
    virtual void display()=0;//pure virtual function
};

class vid: public ytvid{
   
    float vidlength;
    public:
    vid(string t,float r,float vl):ytvid (t,r){
        vidlength = vl;
    }
    void display(){
        cout<<"the title of vid is "<<title<<endl
        <<"the rating of the vid is "<<rating<<endl
        <<"the video length of vid is "<<vidlength<<endl;
    }
};

class text: public ytvid{
    
    int words;
    public:
    text(string t, float r, int w ):ytvid(t,r){
        words = w;
    }
    void display(){
        cout<<"the title of vid is "<<title<<endl
        <<"the rating of the vid is "<<rating<<endl
        <<"the word length of vid is "<<words<<endl;
    }
};

int main(){
    string title;
    float rating, vl;
    int words;

    title = "happy happy";
    rating = 5;
    vl =6.7;
    

    vid b(title,rating, vl);
    b.display();

    title = "more happy";
    rating = 4.5;
    
    words =78;
    text c(title,rating,words);
    c.display();
    
    return 0;
}