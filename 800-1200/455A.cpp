#include <iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    //actually I think I want to use a map to track frequencies (value, # of instances)
    vector<int> elements(n);

    for (int &p : elements) {
        cin >> p;
    }
    //O n log n time complexity
    sort(elements.begin(), elements.end());

    //auto it = upper_bound(elements.begin(), elements.end(), spend_coins);
    //cout << distance(elements,begin(), it) << "\n" --> first element strictly greater han a value
    //probably just top to bottom sorted - not true, because there is a "Cost" to taking a point value each time
    //highest if the cost is < the value?
    //if the cost is >= value, then we do next down?

    return 0;
}