#include <iostream>
using namespace std;

class employee{
    int id;
    static int count; //static variable is shared by all objects of the class

    public:
        void setdata();
        void getdata();
};
 
int employee:: count;

            void employee::setdata(){
                cout<<"enter emp id: "<<endl;
                cin >> id;
                count++;
            }

            void employee::getdata(){
                cout<<"the emp id is "<<id<<" and the emp count is "<<count<<endl;
            }

            

int main(){
    int j;
    cout <<"no of employees: ";
    cin >>j;
    for (int i=0; i<j; i++){
        employee emp[i];
        emp[i].setdata();
        emp[i].getdata();
    }
        
    return 0;
}