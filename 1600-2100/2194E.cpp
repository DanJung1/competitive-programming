#include <iostream>
#include <vector>
#include <map>

using namespace std;

//the turtle strikes back

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    //maybe try a greedy approach? maybe I use a map to automatically store and order key (total cost) and value pairs

    map<int, vector<int>> adj;
    map<int, int> count;

    //I think I would have to make a tree of different routes that woudl calculate teh routes beforehand perhaps using a red black tree tfor efficient insertion and deletion

    //use DP on DAG to calculate the cost of the different routes

    //do I need to compute all the different routes

    //I have to find the maximum path and I MUST change an element along that path


    return 0;
}