#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int a;
    cin >> a;
    int a1 = a / 1000;
    int a2 = a / 100 % 10;
    int a3 = a / 10 % 10;
    int a4 = a % 10;
    int b = (a1 - a4) * (a1 - a4) + (a2 - a3) * (a2 - a3) + 1;
    cout << b;
}
