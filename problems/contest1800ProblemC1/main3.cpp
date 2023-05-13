#include <bits/stdc++.h>

// https://codeforces.com/contest/1800/problem/C1

using namespace std;

long long solution(vector<long long> cards, int n, int i, priority_queue<long long> bonusDeck, long long power = 0) {
    if(i >= n){
        return power;
    }
    else if(cards[i] != 0) { // card is a bonus card
        bonusDeck.push(cards[i]);

        return solution(cards, n, i+1, bonusDeck, power); // discard card or put the card into the desk.
    }
    else { // card is a hero card
        if(bonusDeck.empty()){
            return solution(cards, n, i+1, bonusDeck, power);
        }
        else {
            long long topBonusCard = bonusDeck.top();
            bonusDeck.pop();

            return solution(cards, n, i+1, bonusDeck,power + topBonusCard);
        }
    }
}


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
        cout << solution(cards, n, 0, bonusDeck) << endl;
    }

    return 0;
}
