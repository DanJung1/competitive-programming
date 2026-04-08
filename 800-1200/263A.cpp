//beautiful matrix
#include <iostream>
#include <vector>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int row, col;
    int x, answer;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> x;

            if (x == 1) {
                row = i;
                col = j;
                answer = abs(row - 2) + abs(col - 2);
                cout << answer;
                return 0;
            }

        }
    }


    return 0;
}