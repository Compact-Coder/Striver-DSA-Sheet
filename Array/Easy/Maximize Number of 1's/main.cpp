#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int findMax(int arr[], int n) {
    int count = 0;
    int maximum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1)
            count++;

        else
            count = 0;

        maximum = max(maximum, count);
    }

    return maximum;
}

int main() {
    int n = 3;
    int arr[n] = { 1,0,1 };

    int ans = findMax(arr);
    cout << ans;

}