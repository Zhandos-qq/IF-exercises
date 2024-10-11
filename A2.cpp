#include <iostream>
using namespace std;
int main(){
    int a , b ;
    cin >> a >> b;
    if(a>b){
        cout << a;
    }
    else if (a=b){
        cout << "I don't have any information about this in my task.";
    }
    else {
        cout << b;
    }
    return 0;
}