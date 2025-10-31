#include <iostream>
using namespace std;

int countEven(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return (d % 2 == 0) + countEven(n / 10);
}

int main() {
    int n;
    cout<<"enter:";
    cin >> n;
    cout << countEven(n);
    return 0;
}
