#include <iostream>
using namespace std;

class bankdeposit{
    int principal;
    int years;
    float rate;
    float returnvalue;

    public: 
    bankdeposit(){};
    bankdeposit(int p, int n, int r);
    bankdeposit(int p, int n, float R);
    void show();
};

bankdeposit::bankdeposit(int p, int n, int r) {
    principal = p;
    years = n;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < years; i++){
        returnvalue = returnvalue * (1 + rate);
        }
}

bankdeposit::bankdeposit(int p, int n, float R) {
    principal = p;
    years = n;
    rate = R/100;
    returnvalue = principal;
    for (int i = 0; i < years; ++i){
        returnvalue = returnvalue * (1 + rate);
        }
}

void bankdeposit::show(){
    cout<<"the principal amount is "<<principal<<endl<<"the no of years "<<years<<endl<<"the rate is "<<rate<<endl<<"the return value is "<<returnvalue<<endl;
}

int main(){
    bankdeposit bd1, bd2, bd3;
    int p, n, r;
    float R;
    cout << "Enter the value of p, n and r" << endl;
    cin >> p >> n >> r;
    bd1 = bankdeposit(p, n, r);
    bd1.show();
   
    cout << "Enter the value of p, n and R" << endl;
    cin >> p >> n >> R;
    bd2 = bankdeposit(p, n, R);
    bd2.show();
    
   bd3.show();
    

    return 0;
}
