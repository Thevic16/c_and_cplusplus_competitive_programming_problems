#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // An iterative binary search function.
    int binarySearch(vector<int> arr, int l, int r, int x)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (arr[m] == x)
                return m;
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;

        if (r == 0){
            if (target == nums[0]){
                return 0;
            }
        }

        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (nums[m] == target)
                return m;
            // If x greater, ignore left half
            if (nums[m] < target)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return -1;
    }
};

int main() {
    vector nums = {-1};
    int target = 2;
    Solution solution = Solution();

    cout << solution.search(nums, target);
}