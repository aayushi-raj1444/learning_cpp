#include <iostream>
using namespace std;

class student {
    protected:
    int roll;
    public:
    void setroll(int r){
        roll = r;
    }
    void getroll(){
        cout<<"the roll no  of the student is "<<roll<<endl;
    }
};


class exam : virtual public student{
    protected:
    int ecmarks;
    int dldmarks;
    public:
    void setmarks(int ec,int dld){
        ecmarks =ec;
    dldmarks = dld;
    }
    void getmarks(){
        cout <<"ec marks is "<<ecmarks<<endl<<"dld marks is "<<dldmarks<<endl;
}
    };

class sports : virtual public student{
 protected:
 float score;
 public:
 void setscore(float sc){
    score = sc;
 }
 void print(){
    cout<<"your sports score is : "<<score<<endl;
 }
};

class result : public exam, public sports{
    
    float result;
    public:
    float percent(){
        result = ((ecmarks + dldmarks + score)*100)/3;
    return result;
    }
    void displayresult(){
        cout <<"the percentage is "<<percent()<<endl;
    }
};


int main(){
    student r;
    r.setroll(1);
    r.getroll();
    exam e;
    e.setmarks(70,87);
    e.getmarks();
    sports s;
    s.setscore(67);
    s.print();
    result a;
    a.percent();
    a.displayresult();
    return 0;
}