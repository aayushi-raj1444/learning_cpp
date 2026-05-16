#include <iostream>
using namespace std;

class employee{
    int id;
    

    public:
        void setdata();
        void getdata();
};
 

            void employee::setdata(){
                cout<<"enter emp id: "<<endl;
                cin >> id;
                cout<<"emp id is "<<id<<endl;
            }

            

int main(){
    int j;
    cout <<"no of employees: ";
    cin >>j;
    for (int i=0; i<j; i++){
        employee emp[i];
        emp[i].setdata();
    }
        
    return 0;
}