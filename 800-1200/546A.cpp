#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int borrow, total, k, n, w;
    total = 0;

    cin >> k >> n >> w;

    for (int i = 1; i < w + 1;i++) {
        total += i * k;
    }  

    borrow = total - n; 

    if (borrow <= 0) {
        //he has enough money - borrow is 0 or negative
        cout << "0" << "\n";
        return 0;
    } else {
        //needs to borrow
        total = abs(borrow);
        cout << borrow << "\n";
        }
    return 0;
}