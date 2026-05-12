#include <iostream>
using namespace std;
 struct employee{
        int salary;
        char name;
        int number;
    };

int main(){
    struct employee emp ;
    cout<<"enter details for employee name:"<<endl;
    cin>> emp.name;
    cout<<"enter details for employee salary:"<<endl;
    cin>> emp.salary;
    cout<<"enter details for employee number:"<<endl;
    cin>> emp.number;

    cout<<emp.name<<endl<<emp.salary<<endl<<emp.number<<endl;
   
    return 0;
}