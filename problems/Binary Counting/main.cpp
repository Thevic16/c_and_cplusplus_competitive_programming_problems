#include <bits/stdc++.h>

using namespace std;

vector<int> createCounter(int bits){
    vector<int>count;
    for (int i = 0; i < bits; ++i) {
        count.push_back(0);
    }
    return count;
}

vector<int> turnToZero(vector<int>v,int start, int end){
    vector<int> count=v;
    if(start<=end){
        for (int i = start; i < end; ++i) {
            count[i]=0;
        }
    }
    return count;
}

vector<int> countOnePosition(vector<int>v){
    vector<int>count =v;

    int size = count.size();
    int index = size;

    while (count[index] != 0){
        index--;
    }

    count[index]=1;
    count=turnToZero(count,index+1,size);


    return count;
}

void printVector(vector<int>v){

    for (int i = 0; i <v.size(); ++i) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{

    vector<int>binaryCount= createCounter(4);
    printVector(binaryCount);
;

    for (int i = 0; i < pow(2,4)-1; ++i) {
        binaryCount = countOnePosition(binaryCount);
        printVector(binaryCount);
    }

    return 0;
}