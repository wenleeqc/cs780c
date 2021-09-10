#include <iostream>
using namespace std;

// base case
template <typename T>
double sum(T t) {
    return t;
}

// recursive case
template <typename T, typename... Args>
double sum(T t, Args... args) {
    return t + sum(args...);
}


int main()
{
    cout << sum(10, 3, 20, 1, 30, 50, 5, 1.5); // return 120.5
    return 0;
}