#include <iostream>
using namespace std;

class complex; 

// 2. Define 'calculator' first, but DO NOT write the body of sumcomplex yet
class calculator {
public:
    int add(int a, int b) {
        return (a + b);
    }
    
    // Just declare the function signature here
    void sumcomplex(complex o1, complex o2); 
};

// 3. Define 'complex' next, now that 'calculator::sumcomplex' is known
class complex {
    int a,b;
public:
    void setdata(int v1, int v2) {
        a = v1;
        b = v2;
    }
    
    // Now the compiler knows exactly what calculator::sumcomplex is!
    friend void calculator::sumcomplex(complex o1, complex o2);
    
    void displaydata(void) {
        cout << "the complex number can be written as " << a << "+i" << b << endl;
    }
};

// 4. Finally, define the body of sumcomplex now that 'complex' members (o1.a) are known
void calculator::sumcomplex(complex o1, complex o2) {
    int a = (o1.a + o2.a);
    int b = (o1.b + o2.b);
    cout << "the sum of complex numbers is: " << a << "+i" << b << endl;               
}

int main() {
    complex c1, c2;
    c1.setdata(3, 4);
    c1.displaydata();
    c2.setdata(5, 6);
    c2.displaydata();
    
    calculator calc;
    calc.sumcomplex(c1, c2);

    return 0;
}