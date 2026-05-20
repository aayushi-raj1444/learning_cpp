#include <iostream>
using namespace std;

class point{
    int a,b;
    public:
    point(int x, int y){
        a=x;
        b=y;
    }

    void printpoint(){
    cout<<"the point is ("<<a<<","<<b<<")";
}
};

int main(){
    int p,q;
    cout<<"enter x and y coordinate"<<endl;
    cin>>p>>q;

point p1(p,q);
p1.printpoint();

    return 0;
}