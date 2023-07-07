#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/first-bad-version/
bool isBadVersion(int version);

class Solution {
public:
    // An iterative binary search function.
    int binarySearch(int l, int r)
    {
        while (l <= r) {
            int m = l + (r - l) / 2;
            // Check if x is present at mid
            if (isBadVersion(m) and !isBadVersion(m - 1))
                return m;
            // If x greater, ignore left half
            if (!isBadVersion(m))
                l = m + 1;
                // If x is smaller, ignore right half
            else
                r = m - 1;
        }
        // If we reach here, then element was not present
        return -1;
    }


    int firstBadVersion(int n) {
        return binarySearch(1 , n);
    }
};


int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
