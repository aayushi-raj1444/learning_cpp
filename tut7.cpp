#include <iostream>
using namespace std;

int main(){
    int n,i;
    cout <<"enter size ofarray:"<<endl;
    cin>>n;
    int *arr=new int[n];
   
    for (int i=0;i<n;i++){
    cout << "enter elements of arr["<<i<<"]";
    cin>>arr[i];}

     for (int i=0;i<n;i++){
    cout<<"printing elements  arr["<<i<<"]:"<<arr[i]<<endl;
    }
    return 0;
}
