#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> getPrefixSum(vector<int>& nums) {
        vector<int> prefixSum = vector<int>();
        prefixSum.push_back(nums[0]);

        for (int i = 1; i < nums.size(); ++i) {
            prefixSum.push_back(nums[i] + prefixSum[i-1]);
        }

        return prefixSum;
    }

    // An iterative binary search function.
    int binarySearch(vector<int> arr, int l, int r, int x)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (arr[m] == x)
                return m+1;
            // If x greater, ignore left half
            if (arr[m] < x)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return l;
    }

    vector<int> get_result(vector<int> prefixSum, vector<int> queries){
        vector<int> results = vector<int>();

        for(int query: queries) {
            results.push_back(binarySearch(prefixSum, 0, prefixSum.size()-1, query));
        }

        return results;
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        vector<int> prefixSum = getPrefixSum(nums);

        return get_result(prefixSum, queries);
    }
};

int main() {
    Solution s = Solution();
    vector<int> nums = {4,5,2,3};
    //vector<int> queries = {3,10,21};
    vector<int> queries = {1};

    vector<int> r = s.answerQueries(nums, queries);

    cout << "Finito";

    return 0;
}
