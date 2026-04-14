# include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int number, subtractions;
    cin >> number >> subtractions;

    for (int i = 0; i < subtractions; i++) {
        if (number % 10 != 0) {
            number--;
        } else {
            number /= 10;
        }
    }
    cout << number << "\n";
    return 0;
}