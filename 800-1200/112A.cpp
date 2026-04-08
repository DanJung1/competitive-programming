#include <iostream>
#include <cctype>
using namespace std;

int main() {

    string input1, input2;
    int length;
    //which one is the first one?
    cin >> input1 >> input2;
    length = input1.length();

    for (int i = 0; i < length; i++) {
        input1[i] = tolower(input1[i]);
        input2[i] = tolower(input2[i]);
    }

    if (input1 < input2) {
        cout << "-1" << "\n";
    } else if (input1 > input2) {
        cout << "1" << "\n";

    } else {
        cout << "0" << "\n";
    }

    return 0;
}
