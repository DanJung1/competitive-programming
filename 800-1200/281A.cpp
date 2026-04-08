#include <iostream>
#include <cctype>

using namespace std;

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string word;
    cin >> word;

    word[0] = toupper(word[0]);
    //or could word[0] - 32 also work?

    cout << word << "\n";
    return 0;
}