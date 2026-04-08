#include <iostream>
#include <cmath>

using namespace std;

void solve() {

    int count, element;
    count = 0;

    cin >> element;
    
    //does this truncate? remove double count for power of 2 and power of 3
    count = floor(sqrt(element)) + floor(cbrt(element)) - floor(pow(element, 1.0/6.0) + 1e-9);
    
    cout << count << "\n";
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