#include <iostream>
#include <set>

using namespace std;

int main() {
//Set

    set<int> s = {2,5,6,8};

   // set<int>::iterator it =s.begin();
    //auto it = s.begin();
    //cout << *it << "\n";
    cout << " " << "\n";

    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << "\n";
    }
    cout << " " << "\n";

    //auto it = s.end(); it--;
    //cout <<"The largest element is:"<< *it << "\n";

    auto it = s.find(7);
    if (it == s.end()) {
    // x is not found
    cout <<"x is not found";
    }
    else cout << *it;



    /*
    cout << s.size() << "\n"; // 4
    for (auto x : s) {
        cout << x << "\n";
    }
    */

/*
    cout << " "<<"\n";

   cout << s.count(2)<<"\n"; // 1
    cout << s.count(4); // 0
*/

/*
    multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    cout << s.count(5) << "\n"; // 3

*/
/*
    s.erase(5);
    cout << s.count(5) << "\n"; // 0
*/

/*
    s.erase(s.find(5));
    cout << s.count(5) << "\n"; // 2
*/


    return 0;
}