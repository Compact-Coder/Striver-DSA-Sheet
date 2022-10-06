#include <bits/stdc++.h>

using namespace std;

int elementSearch(vector<int>& nums) {
    unordered_map<int, int> a;

    for (auto x : nums)
        a[x]++;

    for (auto z : a)
        if (z.second == 1)
            return z.first;

    return -1;
}
int main() {
    vector<int> nums = { 2, 2, 5, 5, 20, 30, 30 };

    int ans = elementSearch(nums);
    cout << ans;
}