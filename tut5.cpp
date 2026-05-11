#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter number:"<<endl;
    cin>>n;
    if(n<50){
        for (int i=n; i<50;i=i+2){
            cout <<i<<endl;
        }
    }
    else {
        cout<<"num > 50";
    }
    return 0;
}