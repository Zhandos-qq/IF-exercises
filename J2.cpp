#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(fabs(a-c)<=1 && fabs(b-d)<=1){
        cout << "YES";}
        else {
            cout << "NO";
        }
    return 0;
}