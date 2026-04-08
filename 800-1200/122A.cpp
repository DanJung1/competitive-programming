#include <iostream>
#include <vector>

using namespace std;

int main() {
    //lucky division
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    //check that the number itself is a lucky number

    //check that it's an "almost lucky number" - itself is divisible by a lucky number

    //could possibly just work up until I hit the number itself for divisibility (ex. 4, 7, 44, 47, 74, 77 ...) and it wouldn't hit runtime, but still seems inefficient

    vector<int> luckynumber = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777};

    for (int i = 0; i < luckynumber.size(); i++) {
        if (n % luckynumber[i] == 0) {
            cout << "YES" << "\n";
            return 0;
        }
    }
    cout << "NO" << "\n";
    return 0;
}