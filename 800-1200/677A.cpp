#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int height, num;

    cin >> num >> height;

    int width, element;
    width = 0;

    for (int i = 0; i < num; i++) {
        cin >> element;

        if (element > height) {
            width += 2;
        } else {
            width++;
        }
    }

    cout << width << "\n";
    return 0;
}