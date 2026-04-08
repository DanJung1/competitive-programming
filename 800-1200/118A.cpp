#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string input, output;
    cin >> input;
    
    //make a set of all vowels
    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};


    //deletes all the vowels,
    //inserts a character "." before each consonant,
    //replaces all uppercase consonants with corresponding lowercase ones.

    for (int i = 0; i < input.length(); i++) {
        input[i] = tolower(static_cast<unsigned char>(input[i]));
        if (vowels.find(input[i]) != vowels.end()) {
            continue;
        } else {
            output += '.';
            output += input[i];
        }
    }

    cout << output << "\n";

    return 0;
}