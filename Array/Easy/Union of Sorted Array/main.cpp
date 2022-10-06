#include <bits/stdc++.h>

using namespace std;

void printUnion(int arr1[], int arr2[], int n, int m) {

    int i = 0, j = 0;

 // this loop is only valid when n = m 
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";

        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";

        else (arr1[i] == arr2[j]);
        {
            cout << arr2[j++] << " ";
            i++;
        }
    }

    // if n != m then we have to add this also

    while (i < n)
        cout << arr1[i++] << " ";

    while (j < m)
        cout << arr2[j++] << " ";


}

int main() {
    int n = 5;
    int arr1[n] = { 1,2,3,4,5 };

    int m = 4;
    int arr2[m] = { 1,2,3,4 };

    printUnion(arr1, arr2, n, m);
}