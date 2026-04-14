#include <iostream>
using namespace std;

int main() {

    //the whole board will be filled up, either with all squares filled, or 1 square left
    int x, y;
    cin >> x >> y;

    //just always round down?

    cout << x * y / 2 << "\n";

    return 0;
}