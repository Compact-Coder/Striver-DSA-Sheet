#include <bits/stdc++.h>

using namespace std;

int main() {
    int n = 5;
    int arr[n] = { 12,34,1,35,1,10 };


    int max1 = -1; // for largest number
    int max2 = -1;// for second largest number


    //to find largest number
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1)
            max1 = arr[i];
    }

    //to find 2nd largest number
    for (int i = 0; i < n; i++) {
        if (arr[i] > max2 && arr[i] < max1)
            max2 = arr[i];
    }

    int min1 = max1;
    int min2 = max1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < min1)
            min1 = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i]< min2 && arr[i]> min1)
            min2 = arr[i];
    }


    cout << " 2nd min number is " << min2 << endl;


    // printing 2nd largest number
    cout << " 2nd largest number is" << max2;
}