#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int length;
    cin >> length;

    //the number of total cubes stay the same, basically the number of cubes per row
    //I think this is just sorting the sequence?

    vector<int> vec;

    for (int i = 0; i < length; i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }

    sort(vec.begin(), vec.end());
    
    for (int x : vec) {
        cout << x << " ";
    }

    return 0;   
}