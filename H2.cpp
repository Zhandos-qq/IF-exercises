#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a , b , c , d;
    cin >> a >> b >> c >> d;
    if(fabs(a-c)==fabs(b-d)){
        cout << "YES";}
        else {
            cout << "NO";
        }
    return 0;
}