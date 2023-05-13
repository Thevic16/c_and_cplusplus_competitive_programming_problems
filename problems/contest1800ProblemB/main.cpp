#include <bits/stdc++.h>

// https://codeforces.com/contest/1800/problem/B

/*
Puts all the information in a dictionary
 key - letter -- value - amount   -> O(n)

 Create a structure that contains key letter lowercase and key letter uppercase.
 and then difference between the letters. -> O(n)

 Sort all by the difference in decrease order and then use k to reduce the value of the differences.
    -> O(n long n)
*/

using namespace std;

struct Amount {
    int value = 0;
};

struct Burl {
    char letter;
    int lowercase;
    int uppercase;
    int difference;
};

map<char, Amount> fromStringToMap(string s, int n) {
    map<char, Amount> map;

    for (int i = 0; i < n; ++i) {
        map[s[i]].value += 1;
    }

    return map;
}

set<char> fromStringToSet(string s, int n) {
    set<char> set1;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    for (int i = 0; i < n; ++i) {
        set1.insert(s[i]);
    }

    return set1;
}

vector<Burl> fromMapToVector(map<char, Amount> map, set<char> set) {
    vector<Burl> vector;

    for(char lowercaseLetter: set) {
        Burl burl;
        burl.letter = lowercaseLetter;
        burl.lowercase = map[lowercaseLetter].value;
        char uppercaseLetter = toupper(lowercaseLetter);
        burl.uppercase = map[uppercaseLetter].value;
        burl.difference =  abs(burl.lowercase - burl.uppercase);
        vector.push_back(burl);
    }

    return vector;
}

bool compareBurl(Burl i1, Burl i2)
{
    return (i1.difference > i2.difference);
}

int calculateKToUse(int difference) {
    if(difference % 2 == 0) {
        return difference;
    }
    else {
        return difference - 1;
    }
}

vector<Burl> preformOperation(int k, vector<Burl> v) {

    for(int i = 0; i < v.size(); i++){
        if(v[i].difference == 1){
            return v;
        }
        else if(k <= 0){
            return v;
        }
        else {
            while(v[i].difference > 1 && k > 0){
                if (v[i].uppercase > v[i].lowercase) {
                    v[i].uppercase -= 1;
                    v[i].lowercase += 1;
                    v[i].difference =  abs(v[i].lowercase - v[i].uppercase);
                    k -= 1;
                }
                else {
                    v[i].uppercase += 1;
                    v[i].lowercase -= 1;
                    v[i].difference =  abs(v[i].lowercase - v[i].uppercase);
                    k -= 1;
                }
            }
        }
    }

    return v;
}

int countAmountBurl(vector<Burl> vector) {
    int cont = 0;

    for(Burl b: vector) {
        cont += min(b.lowercase, b.uppercase);
    }

    return cont;
}


int main() {
    int t, n ,k;
    string s;
    cin >> t;

    while(t--){
        cin >> n >> k >> s;
        map<char, Amount> map1 = fromStringToMap(s, n);
        set<char> set1 = fromStringToSet(s, n);
        vector<Burl> vector1 = fromMapToVector(map1, set1);
        sort(vector1.begin(), vector1.end(), compareBurl);
        vector<Burl> vsolution = preformOperation(k, vector1);
        cout << countAmountBurl(vsolution) << endl;
    }

    return 0;
}
