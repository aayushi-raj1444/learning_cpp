#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"enter number:"<<endl;
    cin>>n;

    int *p = &n;
    cout<<"printing *p :"<<*p<<endl;
    cout<<"printing p :"<<p<<endl;
    cout<<"printing &n :"<<&n<<endl;
    cout<<"printing n :"<<n<<endl;
    return 0;
}