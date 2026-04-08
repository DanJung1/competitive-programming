#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int w, x, y, z;
    //a + b, 
    //a + c, 
    //b + c, 
    //a + b + c 
    
    //not necessarily in correct order 
    //so how do I find the order

    //since they're all positive, the last number is the largest
    vector<int> set;
    cin >> w >> x >> y >> z;

    set.push_back(w);
    set.push_back(x);
    set.push_back(y);
    set.push_back(z);
    //ascending order
    sort(set.begin(), set.end());

    int a, b, c, d, total;

    a = set[3] - set[2];
    b = set[1] - a;
    c = set[3] - a - b;
    //then we get the other one by subtracting this number from one of the other two values that are not one of the two values that I already used
    //how do I get the element that is not in this range

    
    //then subtract using a number that is not 

    cout << a << " " << b << " " << c << "\n";

    return 0;
}