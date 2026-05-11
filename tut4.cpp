#include <iostream>
using namespace std;
int main(){
   int a;
    cout<<"enter marks outof 100:\n";
    cin >>a;
    if (91<a && a<100){
        cout <<"grade AA";
    }
    else if (81<a && a<90){
        cout <<"grade AB";
    }
    else if (71<a && a<80){
        cout <<"grade BB";
    }
    else if (61<a && a<70){
        cout <<"grade BC";
    }
    else if (51<a && a<60){
        cout <<"grade CC";
    }
    else if (41<a && a<50){
        cout <<"grade CD";
    }
    else if (30<a && a<40){
        cout <<"grade DD";
    }
    else if (a<29){
        cout <<"grade FF";}
    

    return 0;
}