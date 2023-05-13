#include <bits/stdc++.h>

// https://codeforces.com/contest/1800/problem/C1

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> cards;

        for (int i = 0; i < n; ++i) {
            long long x;
            cin >> x;
            cards.push_back(x);
        }

        priority_queue<long long> bonusDeck;
        long long power = 0;

        for (int i = 0; i < n; ++i) {
            if(cards[i] != 0){
                bonusDeck.push(cards[i]);
            }
            else {
                if(!bonusDeck.empty()){
                    long long topBonusCard = bonusDeck.top();
                    bonusDeck.pop();
                    power += topBonusCard;
                }
            }
        }

        cout << power << endl;
    }

    return 0;
}