#include <iostream>
#include <vector>

using namespace std;

int main() {
    int v;
    int a;
    cin >> v >> a;

    vector <pair <int, int > > EdgeList;

    for (int i = 0; i < v; ++i) {
        pair<int, int> x;
        cin >> x.first >> x.second;

        EdgeList.push_back(x);
    }

    for (int i = 0; i < v; ++i) {
        cout << EdgeList[i].first <<" " << EdgeList[i].second<<endl;
    }

    return 0;
}