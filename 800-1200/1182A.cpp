#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n;
    cin >> n;

    //sounds like a recursive

    if (n % 2 != 0) {
        cout << 0 << "\n";
    }
    else {
        long long result = pow(2, n/2);
        cout <<  result << "\n";
    }

    return 0;
}