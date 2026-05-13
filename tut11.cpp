#include <iostream>
using namespace std;

int fac(int n){
    if ((n==1) || (n==0)){
    return 1;}
    else{
    int p = n*fac(n-1);
    return p;}
}
int main(){
    int n;
    cout <<"enter n"<<endl;
    cin>>n;

    cout <<fac(n);
    return 0;
}