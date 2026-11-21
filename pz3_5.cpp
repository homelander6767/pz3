#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int s = n / 60 /60;
    int m = n / 60 % 60;
    int c = n % 60;
    cout << s << ":" << m << ":" << c;
}
