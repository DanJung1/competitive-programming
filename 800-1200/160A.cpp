#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //greedy approach - take largest coin each time
    int amount, total, numcoins;

    cin >> numcoins;
    vector<int> coins(numcoins);

    int total_sum = 0;

    for (int i = 0; i < numcoins; i++) {
        cin >> coins[i];
        total_sum += coins[i];
    }

    //make sorted list of coin values
    sort(coins.begin(), coins.end());

    amount = 0;
    int count = 0;

    //take largest one by one until condition is satisfied
    for (int i = coins.size() - 1; i >= 0; i--) {
        amount += coins[i];
        count++;

        if (amount > (total_sum - amount)) break;
    }
    cout << count << "\n";

    return 0;
}