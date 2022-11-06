#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t; cin >>t;


    while(t--) {
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        vector<int> ak1;
        vector<int> bk2;

        for (int i = 0; i < k1; i++) {
            int x;
            cin >> x;
            ak1.push_back(x);
        }
        for (int i = 0; i < k2; i++) {
            int x;
            cin >> x;
            bk2.push_back(x);
        }

        int max_a = *max_element(ak1.begin(), ak1.end());
        int max_b = *max_element(bk2.begin(), bk2.end());

        if (max_a > max_b) {
            cout << "YES"<<"\n";
        } else cout << "NO"<<"\n";
    }

    return 0;
}