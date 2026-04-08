#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sereja = 0;
    int dima = 0;

    vector<int> cards;
    int element;

    for (int i = 0; i < n; i++) {
        cin >> element;
        cards.push_back(element);
    }

    int turn = 0;

    int a = 0;
    int b = cards.size() - 1;

    while (a <= b) {
        //not the absolute maximum, each time, it's maximum of either end
        int maximum = max(cards[a], cards[b]);

        if (cards[a] > cards[b]) {
            a++;
        } else {
            b--;
        }

        if (turn % 2 == 0) {
            sereja += maximum;
        } else {
            dima += maximum;
        }
        
        turn++;
    }

    cout << sereja << " " << dima << "\n";

    return 0;
}