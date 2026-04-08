#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //observations
    //it's probably best to move all the chips to the location where there are the most chips
    //moving chips an even number of steps is free, so ideally would not need to do any of that
    int cost, n, potential_cost;
    cin >> n;

    int a, b;
    a = 0;
    b = 0;

    int element;

    for (int i = 0; i < n; i++) {
        cin >> element;

        if (element % 2 == 0) {
            a++;
        } else {
            b++;
        }   
    }

    cost = min(a, b);

    //you can always simplify to an array with just two elements {a, b}
    //the cost is the min(a, b)

    cout << cost << "\n";
    return 0;
}