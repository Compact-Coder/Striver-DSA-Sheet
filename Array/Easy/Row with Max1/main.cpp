#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int rowWithMax1(vector<vector<int>>& matrix, int n, int m) {
    int count = 0;
    int result = -1;
    int maxi = 0;


    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (matrix[i][j] == 1)
                count++;
        }


        if (count > maxi) {

            maxi = max(maxi, count);
            result = i;
        }
    }
}

