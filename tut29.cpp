#include <iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
   employee(){}
     employee(int inpid){
        id = inpid;
        salary = 100;
    }
};
class programmer: public employee{
    public:
    programmer(int inpid): employee(inpid) {}
    void hehe(int inpid){
        id=inpid;}
    int code =89;
};
int main(){
    employee e1(9) ,e2(5);
    cout <<e1.salary<<endl<<e1.id<<endl;
    cout <<e2.salary<<endl<<e2.id<<endl;
    programmer p1(6);
    cout<<p1.code<<endl<<p1.id<<endl;

    return 0;
}