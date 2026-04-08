#include <iostream>
#include <vector>
using namespace std;



void solve() {

    int n;
    cin >> n;
    vector<int> numbers;

    int element;

    for (int i = 0; i < n; i++) {
        cin >> element;
        numbers.push_back(element);
    }

    int a = 0;
    int b = numbers.size() - 1;
    int turn = 0;

    while (a <= b) {
        if (turn % 2 == 0) {
            cout << numbers[a];
            a++;
        } else {
            cout << numbers[b];
            b--;
        }

        cout << " ";
        turn++;
    }

    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    if (t == 0) return -1;

    while (t--) {
        solve();
    }
    return 0;
}