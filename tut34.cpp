//ambiguty
#include <iostream>
using namespace std;
 class base1{
    public:
    void laugh(){
        cout<<"hehe";
    }
 };
 class base2{
    public:
    void laugh(){
        cout<<"haha";
    }
 };
 class derived : public base1, public base2{
    public:
    void greet(){
    base2 :: laugh();
 }};
int main(){
    derived d;
    d.greet();
    return 0;
}