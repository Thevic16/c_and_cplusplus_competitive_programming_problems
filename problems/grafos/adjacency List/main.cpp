#include <iostream>
#include <vector>

using namespace std;

int main() {
    int v,a;
    cin >> v >> a;

    vector <vector<int>> AdjList(v-1);

    for (int i = 0; i < v; ++i) {

        pair<int, int> x;
        cin >> x.first >> x.second;

        AdjList[x.first].push_back(x.second);
    }

    return 0;
}