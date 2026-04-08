#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //do I use a hashset here?
    //a standard 32-bit int maxes out at 2 x 10^9 - need to use long long here
    long long n;
    int count = 0;
    cin >> n;

    while (n > 0) {
        //peel off each digit using n % 10
        if (n % 10 == 4 || n % 10 == 7) {
            count++;
        }
        n /= 10;
    }

    if (count == 4 || count == 7) {
        //does this need to be recursive?
        cout << "YES" << "\n";
    } else {
        cout << "NO" << "\n";
    }

    return 0;
}