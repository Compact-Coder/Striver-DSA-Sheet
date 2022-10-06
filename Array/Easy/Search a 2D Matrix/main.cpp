#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n = matrix.size();
        int m = matrix[0].size();

        int start = 0;
        int end = m * n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            int row = mid / m;
            int column = mid % m;

            if (matrix[row][column] == target)
                return true;

            else if (matrix[row][column] >= target)
                end = mid - 1;

            else
                start = mid + 1;
        }
        return false;
    }
};

int main() {
    vector<vector<int>> matrix = [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]];
    int target = 11;

    Solution obj;
    int ans = obj.searchMatrix(matrix, target);
    cout << ans;
}