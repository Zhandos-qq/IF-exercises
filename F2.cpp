#include <iostream>
using namespace std;
int main(){
    int a , b , c ;
    cin >> a >> b >> c;
    if (a>b && a>c){
        cout << a;
    }
    if (b>a && b>c){
        cout << b;
    }
    if (c>a && c>b){
        cout << c;
    }
    else {
        cout << "I don't have any information about this in my task.";//if a,b=c something like that
    }
    return 0;
}