#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



void solve() {
    //I forgot, need to handle input correctly

    int strictlyincreasing = 1;
    int n;
    vector<int> sorted;

    cin >> n;
    //this is easy, I just use two values 
    //a sorted list of distinct elments, the numer of times I can repeat
    int element;

    for (int i = 0; i < n; i++) {
        cin >> element;
        sorted.push_back(element);
    }

    sort(sorted.begin(), sorted.end());

    //I don't realy want two loops though
    for (int i = 1; i < n; i++) {
        if (sorted[i] > sorted[i - 1]) strictlyincreasing++;
    }
    cout << strictlyincreasing << "\n"; 

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}