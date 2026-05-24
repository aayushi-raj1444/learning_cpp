//initialization
#include <iostream>
using namespace std;

class test{
    int a,b;
    public:
    test (int i, int j): a(i) , b(j){
    
        cout<<"the value of a "<<a<<endl;
        cout<<"the value of b "<<b<<endl;
    }
};
int main(){
 test t(8,9);
 
    return 0;
}