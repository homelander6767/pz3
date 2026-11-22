#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int h,a,b;
    cin >> h >> a >> b;
    int c = (h - b - 1) / (a - b) + 1;
    cout << c;
}
