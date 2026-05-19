#include <iostream>
using namespace std;

class y;
class x{
    int val1;
    public:
    void hehe(int value){
        val1 = value;
    }
    friend void swap(x &o1, y &o2); 
    void display (){
        cout <<"val1 : "<<val1<<endl;
    }
};

class y{
    int val2 , o2;
    public:
    void hehe(int value){
        val2 = value;
    }friend void swap(x &o1, y &o2); 
     void display (){
        cout <<"val2 : "<<val2<<endl;
    }
};

void swap(x &o1, y &o2){
        int temp = o1.val1;
        o1.val1 = o2.val2;
        o2.val2 = temp;

        cout <<"val1 = "<<o1.val1<<" and val2 = "<<o2.val2<<endl;
}
int main(){
    x a1;
    a1.hehe(6);
    a1.display();
    y a2;
    
    a2.hehe(7);
    a2.display();

    swap(a1,a2);

    return 0;
}




