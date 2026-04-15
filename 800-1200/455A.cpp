#include <iostream>
#include<cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    const int MAX_VAL = 100001;
    long long cnt[MAX_VAL] = {0};

    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        cnt[x]++;
    }
    //ok initialize my DP array to store the maximum points you can get considering all numbers from 0 up to i
    long long dp[MAX_VAL];
    dp[0] = 0; //THIS IS My base case!
    dp[1] = cnt[1] * 1; //if there's only ones - you just multiply the number of ones in cnt and then multiply by 1

    for (int i = 2; i < MAX_VAL; i++) {
        dp[i] = max(dp[i - 1], 1LL * i * cnt[i] + dp[i - 2]);
    }

    //need to make dp relation - dp[i] = max(dp[i - 1], i * cnt[i] + dp[i - 2]);

    //and then to print the actual results:
    cout << dp[MAX_VAL - 1] << "\n";
    //going to come back to this problem after solving some easier dp problems

    return 0;
}