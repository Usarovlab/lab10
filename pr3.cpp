
#include <iostream>
#include<cmath>
using namespace std;
int Palindrome(int n) {
    if (n >= 0 && n < 10) return true;
    int d = log10(n);
    int p = pow(10, d);
    if (n / p != n % 10) return false;
    return Palindrome((n % p) / 10);
}
int main() {
    int n;
    cout<<"enter:";
    cin>>n;
    cout<<"Palindrome value: "<<Palindrome(n);

    return 0;
}
