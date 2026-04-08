#include <iostream>
#include <cmath>

using namespace std;

void solve() {
    int n, x, y;
    cin >> n;

    //by square rooting the number you can find the max 
    //truncates value (should be same as floor for positive numbers)
    int result = ceil(sqrt(n));

    int difference = abs(pow(result, 2) - n);
    //rows and columns: + 1, +3, +5, +10 ...

    x = 1;
    y = result;

    for (int i = 0; i < difference; i++) {

        if (x < result) {
            x++;
        } else {
            y--;
        }
    }

    cout << y << " " << x << "\n";
}
int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }
    
    return 0;
}

