//simple algorihtms that work in O(n^2) time
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> array(n);

    //bubble sort where the elements bubble in the array acording to their values
    //whenever two elements are not in order they swap (consists of n rounds)
    for (int i = 0; i < n; i++) {
        //after every iteration, the greatest element up to that point will be in the correct position
        //so for n iterations, on the i-th iteration, the element at n - i - 1 will be correct
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                swap(array[j], array[j + 1]);
            }
        }
    }

    //inversions - buble sort is an example o fa sortin galgorithm that always swaps consecutive elements
    //these types of algorithms are always at least O(n^2) because in the worst case
    //that's how many swaps are required in the array

    //O(n log n) algorithms

    //merge sort is O(n log n)
    //divdes up into log n layers- merrging sorted list atkes o(n) time because it's already sorted
    //makes it very nice and easy

    //go back to section about sorting lower bound

    //the lower boudn n log n does not apply to algorithms that do not compare aray elements but instead use some other information
    //counting sort is an algorithm that sorts an array in O(n) time given the fact that every element in the array is an integer between 0...c and c = O(n)

    //algorithm creates a bookkeeping array
    //the algorithm iterates through teh original array and calculates how many times each element appears in the array

    //construction of the bookkeeping array takes O(n) time, and then you can make the new array in O(N) time!
    //counting sort is very efficient but it can only be used when the constant c is small enoguh

    //sorting in c++ is almost always done using the library function, 

    vector<int> v ={4,3,5,8,3};
    //so end is always n -1? seems convenient - are these class functions of hte object vector?
    sort(v.begin(), v.end());

    //and then decreasing order can be done with:
    sort(v.rbegin(), v.rend());
    //rear begin adn rear end

    //can also sort strings
    string s = "monkey";
    sort(s.begin(), s.end());

    //function sort requires a comparison operator is defined for the data type
    //when sorting this operator will be used whenever it's necessary to find order of two elements
    //most C++ data types have a built in comparator

    //Pairs (pair) are sorted according to their first value other than when their first values are the same so that they are sorted according to their second values
    //what is the difference between pairs and tuples?

    vector<pair<int, int>> a;
    //I think push_back is how you add elements to an array
    a.push_back({1,5});
    a.push_back({8,9});
    a.push_back({1,2});

    sort(a.begin(), a.end());


    //similarily, tuples are sorted primarily by their first element and secondarily by the second element

    vector<tuple<int, int, int>> b;
    b.push_back({2,4,5});
    b.push_back({3,7,5});
    sort(b.begin(), b.end());

    //goal for today is to get through to graph algorithms 

    return 0;

} 