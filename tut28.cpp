#include <iostream>
using namespace std;
int count =0;
 class num{
    public:
    num (){
        count ++;
        cout<<"constructor block \n"<<count<<endl;
    }
    ~num(){
        count --;
        cout<<"deconstructor block \n "<<count<<endl;
    }
 };


int main(){
    cout<<"in main func\n";
    num n1;


    return 0;
}