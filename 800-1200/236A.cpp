#include <iostream>
#include <set>

using namespace std;

int main() {
    //read question carefully - distinct characters in one's user name
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    set<char> seen;

    string name;
    cin >> name;


    //going to use a hashset to count distinct number of characters
    for (int i = 0; i < name.length(); i++) {
        seen.insert(name[i]);
    }
    int count = seen.size();

    if (count % 2 == 0) {
        cout << "CHAT WITH HER!" << "\n";
    } else {
        cout << "IGNORE HIM!" << "\n";
    }
    return 0;
}