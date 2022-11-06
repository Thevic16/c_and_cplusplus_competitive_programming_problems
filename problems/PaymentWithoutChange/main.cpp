#include <iostream>

using namespace std;

int main() {
    int q;
    cin >> q;

    while(q--) {
        int a,b,n,s;
        cin >> a >>b >>n>>s;

        int xm =min(s/n,a);
        int y = s-n*xm;

        if (y <= b) {
            cout << "YES" << endl;
        } else
            cout << "NO" << endl;
    }

    return 0;
}