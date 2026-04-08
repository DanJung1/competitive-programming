#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/282/A

int main() {

    int n, x;
    cin >> n;
    x = 0;

    //no need to use vector
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if (s[1] == '+') x++;
        else x--;

    }

    cout << x << "\n";

    return 0;
}