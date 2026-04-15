#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
    //smells like a dp problem
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> nums(n);

    int og_ones = 0;

    for (int& e : nums) {
        cin >> e;
        if (e == 1) og_ones++;
    }

    //feel like I could also do this iteratively with a counter or two pointers
    //dp[i] = maximum number of points I can get up to index i
    //this is actually just kadane's

    int local_max = 0;
    int global_max = INT_MIN;

    for (int i = 0; i < nums.size();i++) {
        //if it's negative just start over
        if (local_max < 0) {
            if (nums[i] == 0) {
                local_max = 1 - nums[i];
            } else {
                local_max = -1;
            }
            
        } else {
            if (nums[i] == 0) {
                local_max = local_max + 1;
            } else {
                local_max = local_max - 1;
            }
        }
        if (local_max > global_max) global_max = local_max;
    }

    cout << og_ones + global_max << "\n";
}