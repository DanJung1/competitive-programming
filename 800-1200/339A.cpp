#include <iostream>
#include <algorithm>
using namespace std;
//helpful maths
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    string output;
    //extract only the numbers
    cin >> input;

    for (int i = 0; i < input.length(); i += 2) {
        output += input[i];
    }

    //transform here
    sort(output.begin(), output.end());

    //then add back the + signs - actually isntead of modifying the string we can just add the plus signs back in when printing
    for (int i = 0; i < output.length(); i++) {
        if (i > 0) {
            cout << "+";
        }
        cout << output[i];
    }
    cout << "\n";
    return 0;
}