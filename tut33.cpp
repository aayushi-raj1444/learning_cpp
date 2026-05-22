#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class simmplecalc{
    protected:
    int a,b;
    char c;
    public:
    void getdata(){
        cout<<"enter the value of a : "<<endl;
        cin>>a;
        cout<<"enter the value of b : "<<endl;
        cin>>b;
    }
    int process(char){
        cout<<"choose operation (+,-,*,/)"<<endl;
        cin>>c;
        if (c =='+'){
            return a+b;
        }
        else if (c=='-'){
            return a-b ;
        }
        else if (c=='*'){
            return a*b;
        }
        else if(c=='/'){
            return a/b;
        }
    }
};

class scientificcalc{
    protected:
    int x,y;
    string z;
    public:
    void getdata(){
        cout<<"enter the value of x : "<<endl;
        cin>>x;
        cout<<"enter the value of y : "<<endl;
        cin>>y;
    }
    int process(string){
        cout<<"choose operation (max,min,)"<<endl;
        cin>>z;
        if (z =="max"){
            return max(x,y);
        }
        else if (z =="min"){
            return min(x,y) ;
        }
        
    }
   
};

class hybrid : public simmplecalc , public scientificcalc{
    public:
    
    void display1(){
        simmplecalc::getdata();
        cout<<"the output is : "<<simmplecalc::process('c')<<endl;
    }
    void display2(){
        scientificcalc::getdata();
        cout<<"the output is : "<<scientificcalc::process("z")<<endl;
    }
};

int main(){
    hybrid h;
    h.display1();
    h.display2();
    return 0;
}