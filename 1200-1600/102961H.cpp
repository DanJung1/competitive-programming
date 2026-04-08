//maximum subarray sum
#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long maximum = -1e18;
    long long running = -1;

    int element;

    int n;

    cin >> n;
    //set first element to the running sum?

    for (int i = 0; i < n; i++) {
        cin >> element;
        //if the current is negative, it's always better to just leave it behind

        if (running < 0) {
            running = element;
        } else {
            //else if the element shown is still increasing
            //otherwise, we determine if it's better to add the current
            running = running + element;
        } 

        maximum = max(maximum, running);
    } 
    
    cout << maximum << "\n";

    return 0;
}