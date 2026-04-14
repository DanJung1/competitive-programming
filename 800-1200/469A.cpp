#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int levels;
    cin >> levels;

    int p, y;
    cin >> p;
    vector<int> passed(p);

    for (int i = 0; i < p; i++) {
        int element;
        cin >> element;
        passed[i] = element;
    }

    cin >> y;

    for (int i = 0; i < y; i++) {
        int element;
        cin >> element;
        passed.push_back(element);
    }

    for (int i = 1; i < levels + 1; i++) {
        if (find(passed.begin(), passed.end(), i) == passed.end() ) {
            cout << "Oh, my keyboard!" << "\n";
            return 0;
        }
    }
    //if I pass everything
    cout << "I become the guy." << "\n";
    return 0;
}