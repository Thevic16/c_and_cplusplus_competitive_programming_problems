#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int>v1;
    vector<int>v2;

    for (int i = 0; i < 5; ++i) {
        int x;
        cin >>x;
        v1.push_back(x);
    }

    for (int i = 0; i < 5; ++i) {
        int y;
        cin >>y;
        v2.push_back(y);
    }

    int j=0;
    bool compatibles=true;
    while(j<5){
        if(v1[j]==v2[j]){
            cout<<"N"<<endl;
            compatibles=false;
            break;
        }
        j++;
    }

    if(compatibles){
        cout<<"Y"<<endl;
    }

    return 0;
}