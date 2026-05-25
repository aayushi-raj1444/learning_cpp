#include <iostream>
using namespace std;
class shop{
    int id, price;
    public:
    void getdata(int a, int b){
        id = a;
        price = b;
    }
    void print(){
        cout <<"id of item is: "<<id<<endl;
        cout <<"price of item is: "<<price<<endl;
    }
};
int main(){
    shop s;
    shop *p = new shop[2];
    shop *ptemp = p;
    int x,y,i;
    for (i=0;i<2;i++){
        cout << "enter item id\nenter item price"<<endl;
        cin>>x>>y; 
        p->getdata(x,y);
        p->print();
    }

    return 0;
}