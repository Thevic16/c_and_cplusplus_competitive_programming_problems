#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    // An iterative binary search function.
    int binarySearch(vector<int> arr, int l, int r)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if(m == 0 and arr[m] != 0) {
                return m;
            }
            else if(m == (arr.size() - 1) and arr[m] != (arr.size() - 1)){
                return m;
            }
            else if (arr[m] != m and arr[m+1] == arr[m]+2 and arr[m-1] == arr[m]-1) {
                return m+1;
            }
            else if (arr[m] != m and arr[m+1] == arr[m]+1 and arr[m-1] == arr[m]-2) {
                return m;
            }
            else if (arr[m] > m){
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        // If we reach here, then element was not present
        return arr.size();
    }

    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        return binarySearch(nums, 0, nums.size()-1);
    }
};

int main(void){
    Solution s = Solution();
    vector<int> nums1 = {3,0,1};
    vector<int> nums2 = {0,1};
    vector<int> nums3 = {9,6,4,2,3,5,7,0,1};


    cout << s.missingNumber(nums3) << endl;
}
