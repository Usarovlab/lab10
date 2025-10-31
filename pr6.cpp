#include <iostream>
using namespace std;

int product(int n) {
    if (n == 0)
        return 1;
    int d = n % 10;
    return d *product(n / 10);
}

int main() {
    int n;
    cout<<"enter:";
    cin >> n;
    cout << product(n);
    return 0;
}
