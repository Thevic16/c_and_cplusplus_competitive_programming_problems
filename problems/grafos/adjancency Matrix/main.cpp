#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main() {
    int v;
    int a;
    cin >> v >>a;
    int AdjMat[v][v];
    memset(AdjMat,0, sizeof(AdjMat));

    for (int i = 0; i < v; ++i) {
            pair<int, int> x;
            cin >> x.first >> x.second;

            AdjMat[x.first][x.second]=1;
    }

    for (int i = 0; i < v; ++i) {
        for (int j = 0; j < v; ++j) {
            cout << AdjMat[i][j]<<" ";
        }
        cout <<endl;
    }

    return 0;
}