#include <iostream>
using namespace std;

class y;

class x{
    int num1;
    public:
    void add(int value){
        num1= value;
    }
    friend void sum(x,y);
};

class y{
    int num2;
    public:
    void add(int value){
        num2= value;
    }
    friend void sum(x,y);
};

void sum (x o1, y o2){
    
    cout<<"the sum of num1 and num2 is "<<(o1.num1+o2.num2)<<endl;
};

int main(){
        x a1;
        a1.add(4);

        y b1;
        b1.add(9);

        sum (a1 , b1);

    return 0;
}