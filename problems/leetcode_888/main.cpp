// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/special-array-with-x-elements-greater-than-or-equal-x/

class Solution {
public:
    // An iterative binary search function.
    bool binarySearch(vector<int> arr, int l, int r, int x)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if(m == 0 and arr[m] >= x){
                if(arr.size() == x){
                    return true;
                }
                else {
                    return false;
                }
            }
            else if (arr[m] >= x and arr[m-1] < x) {
                if(arr.size() - m == x){
                    return true;
                }
                else {
                    return false;
                }
            }
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return false;
    }

    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 1; i <= nums.size(); ++i) {
            if(binarySearch(nums, 0, nums.size()-1, i)){
                return i;
            }
        }

        return -1;
    }
};


int main() {
    vector<int> nums1 = {3,5};
    vector<int> nums2 = {0,0};
    vector<int> nums3 = {0,4,3,0,4};

    Solution solution = Solution();

    cout << solution.specialArray(nums1) << endl;
    //cout << solution.specialArray(nums2) << endl;
    //cout << solution.specialArray(nums3) << endl;

    return 0;
}
