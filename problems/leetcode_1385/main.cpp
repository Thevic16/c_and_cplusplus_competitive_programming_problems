// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/find-the-distance-value-between-two-arrays/

class Solution {
public:
    // An iterative binary search function.
    bool binarySearchPositive(vector<int> arr, int l, int r, int x, int d)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (abs(arr[m] - x) <= d)
                return false;
            // If x greater, ignore left half
            if (arr[m] > x)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return true;
    }

    bool binarySearchNegative(vector<int> arr, int l, int r, int x, int d)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (abs(arr[m] - x) <= d)
                return false;
            // If x greater, ignore left half
            if (arr[m] <= x)
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return true;
    }

    vector<int> filterNegative(vector<int>& arr) {
        vector<int> filterArr = vector<int>();

        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] < 0){
                filterArr.push_back(arr[i]);
            }
        }

        return filterArr;
    }

    vector<int> filterPositive(vector<int>& arr) {
        vector<int> filterArr = vector<int>();

        for (int i = 0; i < arr.size(); ++i) {
            if(arr[i] >= 0){
                filterArr.push_back(arr[i]);
            }
        }

        return filterArr;
    }

    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        vector<int> arr1FilterPositive = filterPositive(arr1);
        vector<int> arr1FilterNegative = filterNegative(arr1);

        vector<int> arr2FilterPositive = filterPositive(arr2);
        vector<int> arr2FilterNegative = filterNegative(arr2);

        sort(arr2FilterPositive.begin(), arr2FilterPositive.end());
        sort(arr2FilterNegative.begin(), arr2FilterNegative.end());

        int cont = 0;

        for (int i = 0; i < arr1FilterPositive.size(); ++i) {
            if(binarySearchPositive(arr2FilterPositive, 0, arr2FilterPositive.size()-1, arr1FilterPositive[i], d)
            && binarySearchNegative(arr2FilterNegative, 0, arr2FilterNegative.size()-1, arr1FilterPositive[i], d)){
                cont++;
            }
        }

        for (int i = 0; i < arr1FilterNegative.size(); ++i) {
            if(binarySearchPositive(arr2FilterNegative, 0, arr2FilterNegative.size()-1, arr1FilterNegative[i], d)
               && binarySearchNegative(arr2FilterPositive, 0, arr2FilterPositive.size()-1, arr1FilterNegative[i], d)){
                cont++;
            }
        }

        return cont;
    }
};


int main() {
    vector<int> arr1 = {-3,10,2,8,0,10};
    vector<int> arr2 = {-9,-1,-4,-9,-8};

    Solution solution = Solution();

    cout << solution.findTheDistanceValue(arr1, arr2, 2);

    return 0;
}
