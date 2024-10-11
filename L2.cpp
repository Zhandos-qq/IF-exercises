#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int m, n, k;
    cin >> m >> n >> k;
    if(((k % n == 0 && (k / n) < m)) || (k % m == 0 && (k / m < n))){
        cout << "YES";}
        else {
            cout << "NO";
        }
    return 0;
}