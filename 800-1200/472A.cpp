#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    //if it's even, we can just use two even numbers (divide it by 2 or something)
    if (n % 2 == 0) {
        cout << 8 << " " << n - 8 << "\n";
    } else {
        cout << 9 << " " << n - 9 << "\n";
    }
    //if it's odd, perhaps we divide by 3 on one side, and the other is divislbe by 2

    return 0;
}