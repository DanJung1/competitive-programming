#include <iostream>
using namespace std;

int main() {
    //some copetitive prpogramming stuff
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    //need to initialize it to zero. otherwise it just uses whatever value was there before
    int output = 0;

    

    while (n--) {
        int p,v,t;
        //runs code n times - is 0 false in c++?
        cin >> p >> v >> t;

        if (p + v + t >= 2) {
            output++;
        }
    }

    cout << output << "\n";

    return 0;
}