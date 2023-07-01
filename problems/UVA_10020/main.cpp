// C++ program for the above approach
// https://www.geeksforgeeks.org/minimum-number-of-intervals-to-cover-the-target-interval/


// https://vjudge.net/problem/UVA-10020

#include <bits/stdc++.h>
using namespace std;
// Function to find the minimum number
// of intervals in the array A[] to
// cover the entire target interval
pair<int, vector<pair<int, int>>> minimizeSegment(vector<pair<int, int> > A,
                    pair<int, int> X)
{
    vector<pair<int, int> > choosing_segments;

    // Sort the array A[] in increasing
    // order of starting point
    sort(A.begin(), A.end());
    // Insert a pair of INT_MAX to
    // prevent going out of bounds
    A.push_back({ INT_MAX, INT_MAX });
    // Stores start of current interval
    int start = X.first;
    // Stores end of current interval
    int end = X.first - 1;
    // Stores the count of intervals
    int cnt = 0;
    // Iterate over all the intervals
    for (int i = 0; i < A.size();) {
        // If starting point of current
        // index <= start
        if (A[i].first <= start) {
            int current_end = A[i].second;
            end = max(current_end, end);
            i += 1;
        }
        else {
            pair<int, int> segment = {start, end};
            choosing_segments.push_back(segment);

            // Update the value of start
            start = end;
            // Increment the value
            // of count
            ++cnt;

            // If the target interval is
            // already covered or it is
            // not possible to move
            // then break the loop
            if (A[i].first > end
                || end >= X.second) {
                break;
            }
        }
    }
    // If the entire target interval
    // is not covered
    if (end < X.second) {
        vector<pair<int, int> > empty;
        pair<int, vector<pair<int, int>>> result = {0, empty};
        return result;
    }
    // Return Answer
    pair<int, vector<pair<int, int>>> result = {cnt, choosing_segments};
    return result;
}

void print_choosing_segments(vector<pair<int, int> > choosing_segments) {
    for(pair<int, int> p: choosing_segments){
        cout << p.first << " " << p.second << endl;
    }
}

// Driver Code
int main()
{
    int t;

    cin >> t;

    while(t--){
        int m, l, r;
        cin >> m;
        vector<pair<int, int> > A;

        cin >> l >> r;
        while(r != 0 or l != 0){
            pair<int, int> segment = {l, r};
            A.push_back(segment);
            cin >> l >> r;
        }

        pair<int, int> X = { 0, m};

        pair<int, vector<pair<int, int>>> result = minimizeSegment(A, X);
        cout << result.first << endl;
        vector<pair<int, int> > choosing_segments = result.second;
        print_choosing_segments(choosing_segments);
        cout << " " << endl;
    }

    return 0;
}