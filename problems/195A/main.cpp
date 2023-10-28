#include <bits/stdc++.h>
using namespace std;
// https://codeforces.com/problemset/problem/195/A

bool conditionToPass(int secondsToWait, int size_data_one_unit,
                     int size_download_per_sencond, int video_lenght_seconds){
    int what_we_have_downloaded = secondsToWait*size_download_per_sencond;
    int what_we_can_download_while_watching = size_download_per_sencond*video_lenght_seconds;
    int what_we_need_to_download = size_data_one_unit*video_lenght_seconds;

    return (what_we_have_downloaded + what_we_can_download_while_watching) >= what_we_need_to_download;
}

// An iterative binary search function.
int binarySearch(vector<int> secondsToWait, int l, int r, int size_data_one_unit,
                 int size_download_per_sencond, int video_lenght_seconds)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        if(m == 0 and conditionToPass(secondsToWait[m], size_data_one_unit, size_download_per_sencond, video_lenght_seconds))
            return m;
        // Check if x is present at mid
        else if (conditionToPass(secondsToWait[m], size_data_one_unit, size_download_per_sencond, video_lenght_seconds) &&
                !conditionToPass(secondsToWait[m-1], size_data_one_unit, size_download_per_sencond, video_lenght_seconds))
            return m;
        // If x greater, ignore left half
        else if (!conditionToPass(secondsToWait[m], size_data_one_unit, size_download_per_sencond, video_lenght_seconds))
            l = m + 1;
            // If x is smaller, ignore right half
        else
            r = m - 1;
    }
    // If we reach here, then element was not present
    return -1;
}

int main() {
    vector<int> secondsToWait;
    int size_data_one_unit, size_download_per_sencond, video_lenght_seconds;

    cin >> size_data_one_unit >> size_download_per_sencond >> video_lenght_seconds;

    for (int i = 0; i < size_data_one_unit*video_lenght_seconds; ++i) {
        secondsToWait.push_back(i);
    }

    int m = binarySearch(secondsToWait, 0, secondsToWait.size()-1, size_data_one_unit, size_download_per_sencond,
                         video_lenght_seconds);

    cout << m << endl;

    return 0;
}
