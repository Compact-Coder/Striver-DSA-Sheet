#include <bits/stdc++.h>

using namespace std;

bool arraySortedOrNot(int arr[], int n) {
        // code here
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i - 1])
            return false;
    }

    return true;
}

int main() {
    int n = 4;
    int arr[n] = { 1,3,4,5 };


    int ans = arraySortedOrNot(arr, 5);
    cout << ans;

}