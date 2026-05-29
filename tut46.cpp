#include <iostream>
using namespace std;
template <class a1, class a2>
float avg(a1 x, a2 y){
    float p = (x+y)/2;
    return p;
}
template <class q>
void swapp(q &j,q &i){
    q temp = j;
    j=i;
    i=temp;

}
int main(){
    float a ;
    float n,m;
   
    cout <<"enter 2 numbers : "<<endl;
    cin>>n>>m;
    a =avg (n,m);
    cout<<"the avg is "<<a<<endl;


swapp(n,m);
cout<<"swapped elements "<<n<<m<<endl;

    return 0;
} 

