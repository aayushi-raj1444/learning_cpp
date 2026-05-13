#include <iostream>
using namespace std;
//using pointers reference
void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b= temp;
}

//using reference variable
void swaprefvar(int &a,int &b){
    int temp = a;
    a=b;
    b= temp;
}

int main(){
    int a,b;
    cout <<"enter a";
    cin>>a;
    cout <<"enter b";
    cin>>b;

    swap(&a, &b);
    cout << "swaped numbers are " << a <<"and "<< b;

    swaprefvar(a, b);
    cout << "swaped numbers are " << a <<"and "<< b;

    return 0;
}