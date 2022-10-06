#include <bits/stdc++.h>


using namespace std;

int main() {
    int n = 4;
    int arr[n] = { 1,4,3 };

    //formula of (sum of N numbers)
    int ans = (n * (n + 1)) / 2;

    // intialising sum = 0 
    int sum = 0;


    // adding one by one through iterating
    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    int missingNumber = ans - sum;

    cout << missingNumber;

}