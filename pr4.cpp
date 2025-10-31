#include <iostream>
using namespace std;

bool check(int n, int d) {
    if (d * d > n) return true;
    if (n % d == 0) return false;
    return check(n, d + 1);
}

bool isPrime(int n) {
    if (n <= 1) return false;
    return check(n, 2);
}

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) cout << "Prime";
    else cout << "Not Prime";
    return 0;
}
