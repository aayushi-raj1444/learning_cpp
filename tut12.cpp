#include <iostream>
using namespace std;

int expo(int base, int pow){
    if (pow==0){
        return 1;
    }
    if (pow%2==0){
       return expo(base,pow/2)*expo(base,pow/2);
    }
    else{
        return base*expo(base,pow-1);
    }
}


int main(){
    int base, pow;
    cout <<"enter base"<<endl;
    cin>>base;
     cout <<"enter pow"<<endl;
    cin>>pow;

    expo(base,pow);
    cout<<"print exponent"<<expo(base,pow);
   
    return 0;
}