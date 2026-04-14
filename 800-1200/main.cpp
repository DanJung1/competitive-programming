//we want to tell teh compiler to grave the input/output stream library so we can talk to the screen
#include <iostream>
//entry point for every c++ program - if program returns 0 then the operating system knows the program finished successfully
using namespace std; 
// This allows you to use cin and cout directly

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //declare variables
    int a;
    int b;
    //take input, read the variables - arrwos point into the variables
    //cin knows how to skip spaces and newlines automatically
    cin >> a >> b;

    cout << a + b << "\n";
    // newline character is very lightweight, just addes newline instruction to stream of data being sent to screen
    //endl does two things which is more complex
    //1. adds a newline
    //2. flushes hte buffer
    return 0;
}

//for memory and data structures
//int - usuallly 32 bits, max value is around 2 x 10^9
//long long 64 bits. use this if your numbers might exceed 2 billion (common in cp)

