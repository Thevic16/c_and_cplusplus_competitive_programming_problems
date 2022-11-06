#include <iostream>
#include <queue>

using namespace std;

int main() {

    priority_queue <int> q;
    int n;
    cin >>n;

    for(int i=0;i<n;i++){
        int x;
        cin >>x;

        q.push(x);
    }
    double b;
    double a;

    switch(n%2){

        case 0:

            for(int i=0;i<(n/2)-1;i++){
                q.pop();
            }
            b =q.top();
            q.pop();

            a =(b+q.top())/2;

            printf("%.1f", a);

            break;

        case 1:

            for(int i=0;i<(n-1)/2;i++){
                q.pop();
            }

            printf("%.1f", q.top());

            break;
    }


    return 0;
}