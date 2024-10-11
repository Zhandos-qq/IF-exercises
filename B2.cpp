#include <iostream>
using namespace std;
int main(){
    int a ;
    cin >> a;
    bool leapyear=(a%400==0) or (a%100 != 0 and a%4==0);
    if(leapyear){
        cout << "YES";
    }
    else {
        cout << "NO ";
    }
    return 0;
}