#include <bits/stdc++.h>



using namespace std;
bool verificacion(vector<int> sequence, unsigned int restante) {
    if(sequence.size() ==0){
        return true;
    }
    else if(*max_element(sequence.begin(), sequence.end()) > restante){
        return false;
    }
    else{
        return true;
    }
}
vector<int> subSequence(vector<int> frag) {

    vector<int> sequence;
    int c;
    int i = 0;

    while (i < frag.size() && verificacion(sequence,frag.size()-i)) {
        c = 1;
        for (int j = i; j < frag.size()-1; j++) {
            if (frag[j] <= frag[j+1]) {
                c++;
            } else {
                break;
            }
        }
        i++;
        sequence.push_back(c);
    }

    return sequence;
}

int main () {
    int n; cin >> n;
    vector<int> nums;

    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        nums.push_back(x);
    }
    vector<int> sequence = subSequence(nums);
    cout << *max_element(sequence.begin(), sequence.end());

}