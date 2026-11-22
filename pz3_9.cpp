#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int d1 = n % m;
    int d2 = m % n;
    int d3 = (n % m) * (m % n) + 1;
    cout << d3;
}
