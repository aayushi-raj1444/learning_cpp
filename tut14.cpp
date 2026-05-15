#include <iostream>
#include <string>
using namespace std;

class binary{
    string s;

    public:
        void read(void);
        void chkbin(void);
        void onescomp(void);
        void display(void);
};

void binary::read(void){
    cout<<"enter any binary num: ";
    cin>>s;
}

void binary::chkbin(void){
    for(int i=0; i< s.length();i++){
        if((s.at(i)!= '0') && (s.at(i)!='1')){
            cout<<""<<s<<" is not a binary"<<endl;
        exit (1);}
            cout<< ""<<s<<" is binary"<<endl;
        
        
    }
}

void binary::onescomp(void){
    for(int i=0; i< s.length();i++){
    if(s.at(i)=='0'){
        s.at(i) ='1';
    }
    else{
        s.at(i)='0';
    }
}
}

void binary::display(void){
    cout<<""<<s<<" is the one's complement"<<endl;
}

int main(){
    binary b;
    b.read();
    b.chkbin();
    b.onescomp();
    b.display();


    return 0;
}