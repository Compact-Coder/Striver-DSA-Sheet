#include<bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int n = 3;
    int arr[n] = { 1,2,2 };

    //to count number of duplicates
    int count = 0;

    //iterate
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1])
            count++;
    }

    int countOfElement = n - count;

    cout << countOfElement;

}


