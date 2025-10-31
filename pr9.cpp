#include <iostream>
using namespace std;

int countZero(int n) {
    if (n == 0) return 0;
    int d = n % 10;
    return (d == 0) + countZero(n / 10);
}

int main() {
    int n;
    cout<<"enter:";
    cin >> n;
    cout << countZero(n);
    return 0;
}
