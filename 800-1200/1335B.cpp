#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    //input: length of string, any substring length a, has b distinct letters
    //basically anything in the middle can be filler letters
    int string_length, substring_length, distinct;
    cin >> string_length >> substring_length >> distinct;

    //going to make a list of letters for this problem, might be better way to do it
    vector<char> alphabet = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    string answer = "";

    //basically, I want to construct a string with l distinc tletters

    //length of string - substring length  = possible repeats
    //b distinct letters must be used within the substring
    int letter = 0;
    char actual_letter;

    //int filler = max(0, substring_length - distinct);
    //int filler_index = string_length - substring_length + 1;

    for (int i = 0; i < string_length; i++) {

        //did not use substring length need to use it somehwere

        //maybe could use modulus for a cycle
        //but also, make sure that I am using MINIMUM distinct letters but subarray
        letter = i % distinct;
        actual_letter = alphabet[letter];
        answer += actual_letter;  
    }
    cout << answer << "\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return -1;

    while (t > 0) {
        solve();
        t--;
    }
    return 0;
}

