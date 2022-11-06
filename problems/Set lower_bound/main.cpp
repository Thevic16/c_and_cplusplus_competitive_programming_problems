#include <iostream>
#include <set>

using namespace std;

int main() {

    set<int> s = {2,5,6,7,8,10};

    int x=4;
    auto it = s.lower_bound(x);

    if (it == s.begin()) {
        cout << *it << "\n";
    } else if (it == s.end()) {
        it--;
        cout << *it << "\n";
    } else {
        int a = *it; it--;
        int b = *it;
        if (x-b < a-x) cout << b << "\n";
        else cout << a << "\n";
    }

    return 0;
}