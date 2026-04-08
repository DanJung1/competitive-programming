#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    int n;
    cin >> n;

    
    /*
    for (int i = 0; i < n / 2; i++) {
        int even_number = (i + 1) * 2;
        evensum += even_number;

        int odd_number = (i * 2) + 1;
        oddsum += odd_number;
    }
    */

    //you can use a math theorem instead 
    int evensum = n/2 * (n/2 + 1);
    int oddsum = (n/2) * (n/2);
    
    //if I can add an odd number to odd sum to equal evensum, or an even number to evensum to equal oddsum, then its fine. otherwise cooked

    //check if it's valid or not
    if (abs(oddsum - evensum) % 2 == 1) {
        //this is wrong, need to debug
        cout << "NO" << "\n";
    } else {
        cout << "YES" << "\n";

        int number;
        for (int i = 0; i < n / 2; i++) {
            
            //0 to n/2 - 1
            number = (i + 1) * 2;
            cout << number << " ";

        }

        for (int i = 0; i < n/2; i++) {
          
            //n/2 to n - 1
            number = (i * 2) + 1;
            
            if (i == n/2 - 1) {
                number += (evensum - oddsum);
            }
            cout << number << " ";
        }

        cout << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}