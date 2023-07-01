#include <bits/stdc++.h>

using namespace std;

// https://vjudge.net/problem/UVA-410

bool compareVectorSum(vector<int> i1, vector<int> i2)
{
    return accumulate(i1.begin(), i1.end(), 0) <
    accumulate(i2.begin(), i2.end(), 0);
}


vector<vector<int>> get_chambers(int c, priority_queue<int> masses) {
    vector<vector<int>> chambers(c, vector<int> (0));

    int i = 0;

    while (!masses.empty()){
        if(i == c){
            i = 0;
            sort(chambers.begin(), chambers.end(), compareVectorSum);
        }

        if(chambers[i].size() < 2){
            chambers[i].push_back(masses.top());
            masses.pop();
        }

        i++;
    }

    return chambers;
}

double get_imbalance(vector<int> masses_vector, double c, vector<vector<int>> chambers){
    double am = accumulate(masses_vector.begin(), masses_vector.end(), 0) / c;
    double acc = 0;

    for(vector<int> v: chambers){
        acc += fabs(am - accumulate(v.begin(), v.end(), 0));
    }

    return acc;
}

int main() {
    int c, s;
    int set = 1;

    while(cin >> c >> s){
        priority_queue<int> masses;
        vector<int> masses_vector;

        for (int i = 0; i < s; ++i) {
            int x;
            cin >> x;
            masses.push(x);
            masses_vector.push_back(x);
        }

        vector<vector<int>> chambers = get_chambers(c, masses);

        double imbalance = get_imbalance(masses_vector, c, chambers);

        cout << "Set #" << set << endl;

        for (int i = 0; i < c; ++i) {
            cout << " " << i <<":";
            for (int j = 0; j < chambers[i].size(); ++j) {
                cout << " " << chambers[i][j];
            }
            cout << endl;
        }

        cout << fixed;
        cout << setprecision(5);
        cout << "IMBALANCE = " << imbalance << endl;
        cout << " " << endl;
        set += 1;
    }


    return 0;
}
