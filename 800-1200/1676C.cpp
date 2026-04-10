#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void solve() {

    //is this problem symmetrical?

    //there is objective distance between any two words
    //to minimize total distance, we want the oen with the smallest average change in distance between all of the other words
    //do I brute force this? - can be up to 100 test cases there can be up to 8 words so worst case scenario is 800 words I think it's fine

    int n,length;
    cin >> n >> length;

    vector<string> words;

    for (int i = 0; i < n; i++) {
        string word;
        cin >> word;
        words.push_back(word);
    }

    int smallest = INT_MAX;

    //I want minimum distance between all possible pairs of given strings
    for (int i = 0; i < n; i++) {
        //for each word, compute the distance to all other words
        int distance  = 0;
        //can I somehow memoize so I don't have to compute the same value twice?

        for (int a = i + 1; a < n; a++) {
            //for each word
            for (int b = 0; b < length; b++) {
                //for each character

                distance += abs(words[i][b] - words[a][b]);
                 
            }
            if (distance < smallest) smallest = distance;
            distance = 0;
        }
            
    }


    cout << smallest << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}