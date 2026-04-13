#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    long long sum1 = 0, sum3 = 0, max_sum1 = 0;
    vector<int> numbers;
    int element;

    for (int i = 0; i < n; i++) {
        cin >> element;
        numbers.push_back(element);
    }
    //ok now I filled my array with the numbers    
    //so basically I want to find A | everything else that adds up to at least A
    
    int pointer1 = 0;
    int pointer2 = numbers.size() - 1;

    while (pointer1 <= pointer2) {
        //if rest of array can make set b and set c, compare to max int
        if (sum1 <= sum3) {
            sum1 += numbers[pointer1];
            pointer1++;
        } else {
            //sum3 >= sum1
            sum3 += numbers[pointer2];
            pointer2--;
        } 

        if (sum3 == sum1) {
            max_sum1 = sum1;
        }

    }
    cout << max_sum1 << "\n";

    return 0;
}