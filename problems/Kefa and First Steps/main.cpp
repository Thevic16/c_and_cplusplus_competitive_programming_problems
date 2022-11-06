#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int subsegment(vector<int>a){

    int size=a.size();
    vector<int> cont (size);

    int j=0;
    for (int i = 0; i < size; ++i) {
        if(a[i]<=a[i+1] and i+1 < size){
            cont[j]++;
        }
        else{
            j++;
        }
    }

   return *max_element(cont.begin(), cont.end())+1;
}

int main() {
    int n;
    cin >> n;

    vector<int>a;

    for (int i = 0; i < n; ++i) {
      int x;
      cin>>x;
      a.push_back(x);
    }

    cout << subsegment(a);

    return 0;
}