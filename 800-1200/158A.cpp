#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    //declares a vector of size n immediately
    //in c++ we use std::vector
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin>>a[i];
    }
    int threshold = a[k - 1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= threshold && a[i] > 0) count++;
    }
    //don't forget newline
    cout << count << "\n";
    return 0;
}