#include <iostream>
using namespace std;

template <class q>
class hehe{
    public:
    q data;
    void set_data(q a){ data = a; }
    void display(q a);
};

template<class q> 
void hehe<q> :: display(q a){
    cout<<"templatised func is "<<a<<endl;
}

int main(){
    hehe<int> h;
    h.set_data(5);
    h.display(h.data);
    h.display(10);
    return 0;
}