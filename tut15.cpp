#include <iostream>
using namespace std;  

class shop{
    int itemprice[100];
    int itemid[100];
    int counter; //global

    public:
        void initcounter(){
            counter = 0; //using int counter here leads to local variable declaration
        }
    
        void setprice();
        void displayprice();
};

void shop::setprice(void){
    cout<<"the item id of item "<<counter +1<<": "<<endl;
    cin>> itemid[counter];
    cout<<"the item price of item "<<counter + 1<<": "<<endl;
    cin>> itemprice[counter];
    counter++;
}

void shop::displayprice(){
    for (int i=0;i<counter;i++){
        cout<<"the item id "<<itemid[i]<<" the price "<<itemprice[i]<<endl;
    }
}

int main(){
    int x;
    shop A;
    A.initcounter();
    cout<<"the number of item ";
    cin>>x;
    for (int i=0; i<x ;i++){
        A.setprice();
    A.displayprice();
    }
    

    return 0;
}