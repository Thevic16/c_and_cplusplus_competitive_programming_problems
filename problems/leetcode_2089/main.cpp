#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
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

    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> results;

        if (nums.size() == 1){
            if (nums[0] == target){
                results.push_back(0);
                return results;
            }
            else {
                return results;
            }

        }

        int index = binarySearch(nums, 0, nums.size()-1, target);

        if (index == -1){
            return results;
        }

        results.push_back(index);
        for (int i = index-1; i >= 0; --i) {
            if (nums[i] == target){
                results.push_back(i);
            }
            else {
                break;
            }
        }

        for (int i = index+1; i < nums.size(); ++i) {
            if (nums[i] == target){
                results.push_back(i);
            }
            else {
                break;
            }
        }

        sort(results.begin(), results.end());

        return results;
    }

};

int main() {
    vector v = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
                1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1
                ,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};

    Solution solution = Solution();

    vector<int> result = solution.targetIndices(v, 10);
    cout << result[0];

    return 0;
}
