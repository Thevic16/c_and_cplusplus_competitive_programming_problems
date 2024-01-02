#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/max-area-of-island/

struct Node {
    vector<int> value;
};

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


    // metodos auxiliares
    int getAmountDifferentSets(vector<int> vectorPoints){
        set<int> mySet = set<int>();

        for (int i = 0; i < vectorPoints.size(); ++i) {
            mySet.insert(root(vectorPoints[i]));
        }

        return mySet.size();
    }

    map<int, Node> getMapRootValue() {
        map<int, Node> result;

        for (int i = 0; i < id.size(); ++i) {
            int value = i;
            int myRoot = root(value);

            result[myRoot].value.push_back(value);
        }

        return result;
    }

    int getMaxArea() {
        map<int, Node> mapRootValue = getMapRootValue();
        vector<int> areas = vector<int>();


        for(auto const& imap: mapRootValue){
            areas.push_back(imap.second.value.size());
        }

        return *max_element(areas.begin(), areas.end());
    }

    // metodos relacionados con la impresion.
    void print(int n, int m, bool printRoot = false){
        int ind = 0;
        int mainSpacing = amountDigitsNumber(n*m);
        bool changeLine = true;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int localSpacing = amountDigitsNumber(getNumberInIndexSecure(ind));
                string space = getSpacing(mainSpacing - localSpacing);
                int numberToPrint;

                if(!printRoot){
                    numberToPrint = ind;
                }
                else {
                    numberToPrint = root(ind);
                }

                if(changeLine){
                    cout << numberToPrint;
                    changeLine = false;
                } else{
                    cout << space << numberToPrint;
                }
                ind++;
            }

            changeLine = true;
            cout << endl;
        }

        cout << endl;
        cout << endl;
        cout << endl;
    }

    string getSpacing(int s, string space = " "){
        if(s == 0){
            return space;
        } else{
            space += " ";
            return getSpacing(s - 1, space);
        }
    }

    int getNumberInIndexSecure(int ind){
        if(ind < 0 || ind >= id.size()){
            return 0;
        }
        else {
            return id[ind];
        }
    }

    int amountDigitsNumber(int x, int count = 1){
        if(x == 0){
            return count;
        } else{
            return amountDigitsNumber(x/10, count + 1);
        }
    }

    void printMapRootValue() {
        map<int, Node> mapRootValue = getMapRootValue();
        pair<int,int> p;

        for(auto const& imap: mapRootValue){
            cout << "key:" << imap.first << endl;
            printVector(imap.second.value);
        }
    }

    void printVector(vector<int> v){
        cout << "{ ";
        for (int i = 0; i < v.size(); ++i) {
            cout << v[i] << ",";
        }
        cout << "{ " << endl;
    }

};

class Solution {
public:
    int fromTwoDimensionToOneDimension(vector<vector<int>>& grid, int n, int m, int i, int j){
        if(i < 0 || i >= n){
            return -1;
        }

        if(j < 0 || j >= m){
            return -1;
        }

        //si es cero entonces no debemos conectarnos con el vecino por lo tanto pasamos -1
        if(grid[i][j] == 0){
            return -1;
        }

        int conversion = m*i + j;

        return conversion;
    }

    bool exist(vector<vector<int>>& grid ,int i, int j) {
        if(grid[i][j]){
            return true;
        } else{
            return false;
        }
    }

    QuickUnionUF executeUnionWithNeighbors(vector<vector<int>>& grid, QuickUnionUF uf, int n, int m, int i, int j) {
        int me = fromTwoDimensionToOneDimension(grid, n, m, i , j);
        int leftNeighbor = fromTwoDimensionToOneDimension(grid, n , m, i , j - 1);
        int rightNeighbor = fromTwoDimensionToOneDimension(grid, n, m, i , j + 1);
        int upNeighbor = fromTwoDimensionToOneDimension(grid, n, m, i-1 , j);
        int downNeighbor = fromTwoDimensionToOneDimension(grid, n, m, i+1 , j);

        uf = auxExecuteUnionWithNeighbors(uf, me, leftNeighbor);
        uf = auxExecuteUnionWithNeighbors(uf, me, rightNeighbor);
        uf = auxExecuteUnionWithNeighbors(uf, me, upNeighbor);
        uf = auxExecuteUnionWithNeighbors(uf, me, downNeighbor);
        //uf.print(n, m, true);

        return uf;
    }

    QuickUnionUF auxExecuteUnionWithNeighbors(QuickUnionUF uf, int me, int neighbor){
        if(neighbor != -1){
            uf.my_union(me, neighbor);
        }

        return uf;
    }



    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<int> onePositions;

        QuickUnionUF uf = QuickUnionUF(m*n);
        //uf.print(n, m, true);

        for(int i = 0; i < grid.size(); ++i){
            for (int j = 0; j < grid[i].size(); ++j) {
                if(grid[i][j] == 1){
                    onePositions.push_back(fromTwoDimensionToOneDimension(grid, n, m, i , j));
                    uf = executeUnionWithNeighbors(grid, uf, n , m, i, j);
                }
            }
        }

        int result = 0;

        if(!onePositions.empty()){
            result = uf.getMaxArea();
        }

        return result;
    }

};

int main() {
//    QuickUnionUF uf = QuickUnionUF(10);
//    uf.my_union(1, 2);
//    cout << uf.connected(1, 2) << endl;
//    cout << uf.connected(1, 3) << endl;

    Solution solution = Solution();

    vector<vector<int>> grid{
            {0,0,1,0,0,0,0,1,0,0,0,0,0},
            {0,0,0,0,0,0,0,1,1,1,0,0,0},
            {0,1,1,0,1,0,0,0,0,0,0,0,0},
            {0,1,0,0,1,1,0,0,1,0,1,0,0},
            {0,1,0,0,1,1,0,0,1,1,1,0,0},
            {0,0,0,0,0,0,0,0,0,0,1,0,0},
            {0,0,0,0,0,0,0,1,1,1,0,0,0},
            {0,0,0,0,0,0,0,1,1,0,0,0,0}};

    vector<vector<int>> grid1{
            {0,0,1,0,0,0,0,1,0,0,0,0,0}};

    vector<vector<int>> grid2{
            {0,0,0,0,0,0,0,0,0,0,0,0,0}};

    vector<vector<int>> grid3{{1,1,0,0,0},{1,1,0,0,0},{0,0,0,1,1},{0,0,0,1,1}};



//    cout << solution.maxAreaOfIsland(grid) << endl;
//    cout << solution.maxAreaOfIsland(grid1) << endl;
    cout << solution.maxAreaOfIsland(grid2) << endl;
    cout << solution.maxAreaOfIsland(grid3) << endl;

    return 0;
}
