#include <iostream>
#include <map>

using namespace std;

int main() {

    map<string,int>m;
    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;
    cout << m["banana"] << "\n"; // 3

    if (m.count("aybabtu")) {
        // key exists
        cout <<"key exists";
    }
    else cout<<"key don't exists";

    for (auto x : m) {
        cout << x.first << " " << x.second << "\n";
    }

    return 0;
}