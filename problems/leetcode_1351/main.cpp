#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/

class Solution {
public:
    int binarySearch(vector<int> arr, int l, int r, int n)
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


    int countNegatives(vector<vector<int>>& grid) {
        vector<int> arr;

        for (vector<int> v1: grid) {
            for (int x: v1) {
                arr.push_back(x);
            }
        }

        sort(arr.begin(), arr.end());

        return binarySearch(arr, 0, arr.size()-1, arr.size()) + 1;

    }
};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
