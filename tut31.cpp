//multilevel
#include <iostream>
using namespace std;

class student {
    int roll;
    public:
    void setroll(int);
    void getroll();
};
void student ::setroll(int r){
    roll = r;
}
void student :: getroll(){
    cout<<"the roll no  of the student is "<<roll<<endl;
}
class exam : public student{
    protected:
    int ecmarks;
    int dldmarks;
    public:
    void setmarks(int,int);
    void getmarks();
};
void exam ::setmarks(int ec, int dld){
    ecmarks =ec;
    dldmarks = dld;
}
void exam ::getmarks(){
    cout <<"ec marks is "<<ecmarks<<endl<<"dld marks is "<<dldmarks<<endl;
}
class result : public exam{
    float result;
    public:
    float percent();
    void displayresult();
};
float result :: percent(){
    result = (ecmarks + dldmarks )*50;
    return result;
}
void result ::displayresult(){
    cout <<"the percentage is "<<percent()<<endl;
}

int main(){
    int x,y,z;
    student s;
    cout<<"enter roll number : ";
    cin>>x;
    s.setroll(x);
    s.getroll();
    exam e;
    cout <<"enter marks out of 100\nec marks \ndld marks "<<endl;
    cin>>y>>z;
    e.setmarks(y,z);
    e.getmarks();
    result r;
    r.percent();
    r.displayresult();
    
    return 0;
}