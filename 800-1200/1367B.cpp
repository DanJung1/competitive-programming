#include <iostream>
#include <vector>

using namespace std;

void solve() {
    vector<int> parities;
    int n, element;
    cin >> n;
    //probably uses some modulus properties
    int count = 0;
    int type1 = 0;
    int type2 = 0;

    for (int i = 0; i < n; i++) {
        //parity array
        cin >> element;
        //if this value is not equal to 0 then that means the parities are DIFFERENT
        parities.push_back((element % 2) - (i % 2));

        if ((element % 2) != (i % 2)) {
            if (i % 2 == 0 && element % 2 == 1) type1++;
            if (i % 2 == 1 && element % 2 == 0) type2++;
            count++;
        }
        //two types of issues
        //index even, value odd - type1
        //index odd, value even - type2
    }

    if (count % 2 == 1 || type1 != type2) {
        //there is an odd number of problems and it's not possible
        cout << "-1" << "\n";
        return;
    } else if (count == 0) {
        cout << "0" << "\n";
        return;
    }else{
        cout << type1 << "\n";
        return;
    }
}
int main() {
    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}