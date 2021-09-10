#include <iostream>
using namespace std;

// helper function
// count ones of current number
int countCurrentNumber(int num) {
    int count = 0;
    int currentNumber = num;
    while (currentNumber) {
        // check if last digit is equal to one
        if (currentNumber % 10 == 1) {
            count++;
        }
        // remove last digit
        currentNumber /= 10;
    }
    return count;
}

int countOnes(int num) {
    int totalCount = 0;
    for (int i = 1; i <= num; i++) {
        totalCount += countCurrentNumber(i);
    }
    return totalCount;
}

int main()
{
    int ones = countOnes(15); // return 8
    cout << "Number of ones: " << ones << endl;
}
