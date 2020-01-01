/*
 * Collatz Conjecture
 * By Sam Firnhaber
 */
 
#include <iostream>
using namespace std;

//Swaps the value of the parameters
unsigned int collatzConjecture(unsigned int x) {
    unsigned int count;
    for (count = 0; x > 1; count++)
        (x % 2 == 0) ? (x /= 2) : (x = x * 3 + 1);
    return count;
}

int main() {
    unsigned int x;
    cout << "Please enter a number greater than 1: ";
    //Input must be an unsigned integer
    cin >> x;
    cout << "It took " << collatzConjecture(x) << " steps to get to 1.";
    return 0;
}
