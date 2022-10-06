#include <bits/stdc++.h>

using namespace std;

int search(int arr[], int n, int k) {

    // checking by iterating one by one
    for (int i = 0; i < n; i++) {

        if (arr[i] == k)
            return 1;
    }

    return -1;
}

int main() {

    int n = 5;
    int arr[n] = { 1,2,3,4,5 };
    int k = 6;

    int ans = search(arr, n, k);
    cout << ans;
}