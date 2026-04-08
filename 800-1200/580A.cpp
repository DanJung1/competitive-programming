#include <iostream>
#include <cmath>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //I don't even need a vector here, just need to reset count when it decreases
    int currentcount = 0;
    int n;

    
    int lastnumber = INT_MIN;
    int maxcount = 1;
    //something to do with a similar approach to kadane's algorithm
    cin >> n;
    //dp[i]
    if (n == 0) return 0;


    for (int i = 0; i < n; i++) {

        int currentnumber;
        cin >> currentnumber;

        if (currentnumber >= lastnumber) {
            currentcount++;
            maxcount = max(currentcount, maxcount);
        } else {
            currentcount = 1;
        }
        lastnumber = currentnumber;
    }

    cout << maxcount << "\n";

    return 0;
}