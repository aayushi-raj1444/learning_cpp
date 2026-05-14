#include <iostream>
using namespace std;

class employee{
    public:
    int a1,b1,c1;

    void setdata(int a,int b, int c){
            a1=a;
            b1=b;       
            c1=c;
        cout<<"the value of a "<<a1<<endl;
        cout<<"the value of b "<<b1<<endl;
        cout<<"the value of c "<<c1<<endl;

        }
;
    void getdata(int x1, int y1,int z1){
       
        cout<<"the value of x "<<x1<<endl;
        cout<<"the value of y "<<y1<<endl;
        cout<<"the value of z "<<z1<<endl;
    }
};

       

int main(){
    int p,q,r;
    employee hehe;
    
    
        cout<<"enter the value of a,b,c"<<endl;
        cin >> p >> q >> r;
        
        hehe.setdata(p,q,r);


   
        cout<<"enter the value of x,y,z"<<endl;
        cin >> p >> q >> r;
        
        hehe.getdata(p,q,r);

   

    return 0;
}