#include <iostream>
#include <vector>

using namespace std;

void solve() {
    vector<int> parities;
    int n, element;
    cin >> n;
    //probably uses some modulus properties
    int count;

    for (int i = 0; i < n; i++) {
        //parity array
        cin >> element;
        //if this value is not equal to 0 then that means the parities are DIFFERENT
        parities.push_back((element % 2) - (i % 2));

        if ((element % 2) != (i % 2)) count++;
        //two types of issues
        //index even, value odd
        //index odd, value even
    }

    if (count % 2 == 1) {
        cout << "-1" << "\n";
        return;
    } else{

    }

}
int main() {
    int t;
    cin >> t;

    while (t--){
        solve;
    }

    return 0;
}