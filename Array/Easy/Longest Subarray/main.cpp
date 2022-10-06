#include <bits/stdc++.h>

using namespace std;

int longestSubarray(int arr[], int n, int k) {
    int maxLength = 0;

    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];

            if (sum == k) {
                maxLength = max(maxLength, (j - i + 1));
            }
        }
    }
    return maxLength;
}
int main() {
    int n = 6;
    int arr[n] = { 10, 5, 2, 7, 1, 9 };
    int k = 15;

    int ans = longestSubarray(arr, n, 15);
    cout << ans;


}