#include <bits/stdc++.h>

using namespace std;

// https://leetcode.com/problems/guess-number-higher-or-lower/description/

/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * ll guess(ll num);
 */

int guess(int num);

typedef long long ll;

class Solution {
public:
    ll binary_search(ll low, ll high) {
        if (low > high)
            return -1;
        else {
            ll mid = (low + high) / 2;

            if (guess(mid) == 0)
                return mid;
            else if (guess(mid) == 1)
                return binary_search(mid + 1, high);
            else
                return binary_search(low, mid - 1);
        }
    }

    ll guessNumber(ll n) {
        return binary_search(1, n);
    }
};
