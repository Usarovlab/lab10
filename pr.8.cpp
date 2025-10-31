#include <iostream>
using namespace std;

int Increasing(int n) {
    if (n < 10) return true;

    int last = n % 10;
    int prev = (n / 10) % 10;
    if (prev >= last) return false;
    return Increasing(n / 10);
}


int main() {
    int n;
    cout<<"enter:";
    cin >> n;
    cout << Increasing(n);
    return 0;
}
