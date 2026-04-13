#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int number_shops;
    cin >> number_shops;
    vector<int> prices(number_shops);

    for (int &p : prices) {
        cin >> p;
    }

    sort(prices.begin(), prices.end());

    //the question is just asking for each of those days, how many shops can Vasily afford to buy a bottle of the drink from?
    int num_days, spend_coins;
    cin >> num_days;

    for (int i = 0; i < num_days; i++) {
        cin >> spend_coins;

        //binary search implementation
        int low = 0;
        int high = prices.size() - 1;
        
        int last_highest = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            //I want to find the first instance that is TOO expensive
            if (prices[mid] <= spend_coins) {
                low = mid + 1;
            } else if (prices[mid] == spend_coins) {
                low = mid + 1;
            } else {
                //prices[mid] > spend_coins
                last_highest = mid;
                high = mid - 1;
            }
        }

        if (last_highest == -1) {
            cout << prices.size() << "\n";
        } else {
            cout << last_highest << "\n";
        }
    }
    
    
    return 0;
}