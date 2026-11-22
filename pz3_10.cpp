#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin >> a >> b;
    int c = a + b;
    int c1 = abs(a - b);
    int c2 = (c + c1) / 2;
    cout << c2;
}
