#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/490/A

struct Student {
    int skill;
    int position;
};


int main() {
    int n;
    cin >> n;

    vector<Student> programmers;
    vector<Student> mathematicians;
    vector<Student> pes;


    for (int i = 1; i <= n; ++i) {
        int x;
        cin >> x;

        if(x == 1){
            Student student;
            student.skill = x;
            student.position = i;
            programmers.push_back(student);
        }
        else if(x == 2){
            Student student;
            student.skill = x;
            student.position = i;
            mathematicians.push_back(student);
        }
        else {
            Student student;
            student.skill = x;
            student.position = i;
            pes.push_back(student);
        }
    }

    int m = min(programmers.size(), min(mathematicians.size(), pes.size()));

    cout << m << endl;

    if(m != 0){
        for (int i = 0; i < m; ++i) {
            cout << programmers[i].position << " " << mathematicians[i].position
                 << " " << pes[i].position << endl;
        }
    }

    return 0;
}
