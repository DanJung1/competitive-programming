#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int limak, bob, count;
    count = 0;

    cin >> limak >> bob;

    while (limak <= bob) {
        limak *= 3;
        bob *= 2;

        count++;
    }
    cout << count << "\n";
    return 0;
}