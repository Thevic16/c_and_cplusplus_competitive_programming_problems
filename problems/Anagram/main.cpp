#include <iostream>
#include <algorithm>


using namespace std;


bool cantAnagrama(string s,string s1,int length,int lengthSubString){ // s1 tiene que estar ornedado.
    int i=0;
    string s2;

    while(i+lengthSubString<=length){
        s2 = s.substr(i,lengthSubString);
        sort(s2.begin(),s2.end());
        if(s1==s2){
            return true;
        }
        i++;
    }

    return false;
}


int main() {
    string s;
    cin >> s;
    int lenght = s.size();

    int cantTotal =0;
    string s1;
    string s2;


    for(int i=0;i<lenght;i++){
        for(int j=1;j<=lenght-i;j++){
            s1 = s.substr(i, j);
            sort(s1.begin(),s1.end());
            s2 = s.substr(i+1);

            if(cantAnagrama(s2,s1,s2.size(),j)){
                cantTotal++;
            }
        }
    }

    cout<<cantTotal;

    return 0;
}