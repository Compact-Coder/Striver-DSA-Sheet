#include <bits/stdc++.h>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 8;
    int arr[n] = { 1,2,3,4,5  , 100 , 98 , 56 };

    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    cout << max;

}
