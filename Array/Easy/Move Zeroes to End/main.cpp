#include <bits/stdc++.h>

using namespace std;

void solve(int arr[], int n) {

    int temp[n]; //creating temp storage
    int index = 0; // giving index value to temp

    // storing the values in temp  from which != 0
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index] = arr[i];
            index++;
        }
    }

 // storing the values in temp  from array which == 0
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            temp[index] = arr[i];
            index++;
        }
    }

 // printing out the temp 
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";
    }
}
int main() {
    int n = 5;
    int arr[n] = { 3,0,0,4,5 };

    solve(arr, n);
}