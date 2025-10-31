
#include <iostream>
using namespace std;
int reverse(int a,int rev=0 ) {
    if (a < 1)
        return rev;
    return reverse(a/10,rev*10+a%10);
}
int main() {
    cout<<"reversed value: "<<reverse(1234);

    return 0;
}
