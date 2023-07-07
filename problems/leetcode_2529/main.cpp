#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/maximum-count-of-positive-integer-and-negative-integer/

class Solution {
public:
    int binarySearch_find_negative(vector<int> arr, int l, int r, int n)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] < 0) {
                if (m+1 < n and arr[m+1] >= 0){
                    return m;
                }
                else if (m+1 >= n) {
                    return m;
                }
            }
            if (arr[m] < 0)
                l = m + 1;
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return -1;
    }

    int binarySearch_find_positive(vector<int> arr, int l, int r)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            if (arr[m] > 0) {
                if (m-1 >= 0 and arr[m-1] <= 0){
                    return m;
                }
                else if (m-1 < 0) {
                    return m;
                }
            }
            if (arr[m] <= 0)
                l = m + 1;
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return -1;
    }


    int maximumCount(vector<int>& nums) {
        int r_binarySearch_find_positive = binarySearch_find_positive(nums, 0, nums.size()-1);

        int maximum_pos = 0;

        if (r_binarySearch_find_positive != -1)
            maximum_pos = nums.size() - r_binarySearch_find_positive;

        int maximum_neg = binarySearch_find_negative(nums, 0, nums.size()-1, nums.size()) + 1;
        return max(maximum_pos, maximum_neg);
    }
};

int main() {
    Solution s = Solution();
    vector<int> v = {0,0,0,0,0,0,0,0,0,0};
    cout << s.maximumCount(v);

    return 0;
}
