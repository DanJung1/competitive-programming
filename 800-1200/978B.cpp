#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //need to find the longest sequence of Xs
    int count = 0;

    int n;
    int ans = 0;
    string word;

    cin >> n;
    cin >> word;

    if (n < 3) {
        cout << 0 << "\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (word[i] == 'x') {
            count++;

            if (count >= 3) {
                ans++;
            }
        } else {
            count = 0;
        }
    }
    //I incorrectly assumed that therw ould only be one island of xs there could be multiple
    //how many do I need to delete to become less than 3

    cout << ans << "\n";

    return 0;
}