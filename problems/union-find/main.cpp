#include <bits/stdc++.h>
using namespace std;

class QuickUnionUF
{
public:
        vector<int> id;
        vector<int> sz;

public:
    QuickUnionUF(int N) {
            id = vector<int>(N);
            sz = vector<int>(N, 0);
            for (int i = 0; i < N; i++) id[i] = i;
        }

    int root(int i)
    {
        while (i != id[i]) {
            id[i] = id[id[i]];
            i = id[i];
        }

        return i;
    }

    bool connected(int p, int q)
    {
        return root(p) == root(q);
    }

    void my_union(int p, int q){
        int i = root(p);
        int j = root(q);
        if (i == j) return;
        if (sz[i] < sz[j]) {
            id[i] = j; sz[j] += sz[i];
        }
        else
        {
            id[j] = i; sz[i] += sz[j];
        }
    }

};

int main() {
    QuickUnionUF uf = QuickUnionUF(10);
    uf.my_union(1, 2);
    cout << uf.connected(1, 2) << endl;
    cout << uf.connected(1, 3) << endl;
    return 0;
}
