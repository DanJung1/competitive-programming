#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    //binary search
    //time limit exceeded, might need to be more clever about how I will do this.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int size_a, size_b;
    cin >> size_a >> size_b;

    //parse through a
    int element;

    vector<int> array_a;

    for (int i = 0; i < size_a; i++) {
        cin >> element;
        array_a.push_back(element);
    }
    //O(nLogN) worst case time complexity
    sort(array_a.begin(), array_a.end());

    //ok so now in non-dereasing order
    for (int i = 0; i < size_b; i++) {
        cin >> element;
        //can I use sorting/binary search to find FIRST element that is greater (not equal to or less than), then use that index + 1 to dictate how many elements there are in the set that have less
        //for each element in b, we are going to find how many elements are less than or equal to b
        
        //modified binary search where we keep going until we verify that there is nothing that is greater

        int low = 0;
        int high = array_a.size() - 1;
        int first_higher = -1;

        while (low <= high) {
            //should be middle
            int index = low + (high - low) / 2;

            //less than
            if (array_a[index] < element) {
                low = index + 1;
            }

            //equal to - we have to keep going
            else if (array_a[index] == element) {
                low = index + 1;
            }
            //greater than
            //(array_a[index] > element)
            else {
                first_higher = index;
                high = index - 1;
            }
        }

        if (first_higher == -1) {
            cout << array_a.size() << "\n";
        } else {
            cout << first_higher << "\n";
        }
    }

    return 0;
}