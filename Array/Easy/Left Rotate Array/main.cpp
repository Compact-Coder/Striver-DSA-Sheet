#include<bits/stdc++.h>

using namespace std;
void solve(int arr[], int n, int k) {
    int temp[n];

    int d = 0;

 // store the remaining value after removing 
    for (int i = k; i < n; i++) {
        temp[d] = arr[i];
        d++;

    }

 // store 1 2  in temp after rotating left by k = 2 
    for (int i = 0; i < k; i++) {
        temp[d] = arr[i];

    }

 // print temp array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
}

int main() {
    int n = 7;
    int k = 2;

    int arr[] = { 1,2,3,4,5,6,7 };
    solve(arr, n, k);
}