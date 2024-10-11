#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if((fabs(c-a)==2 && fabs(d-b)==1) || (fabs(c-a)==1 && fabs(d-b)==2)){
        cout << "YES";}
        else {
            cout << "NO";
        }
    return 0;
}