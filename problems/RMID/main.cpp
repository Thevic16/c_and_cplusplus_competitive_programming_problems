#include <iostream>
#include <queue>
#include <stack>

using namespace std;

int main() {

    int r;
    int n;
    int p=0;

    while(p==0) {

        priority_queue<int> q;
        stack<int> s;
        cout <<" "<<endl;

        do{
            cin >> r;

            if (r != -1 and r!=0) {
                q.push(r);
                n=q.size();
            }

            else if (n%2==1 and q.empty() !=1 and r!=0) {

                if (n % 2 == 1) {

                    for (int i = 0; i < (n/2); i++) {
                        s.push(q.top());
                        q.pop();

                }
                    cout << q.top() <<endl;
                    q.pop();


                    for (int i = 0; i < n / 2; i++) {
                        q.push(s.top());
                        s.pop();

                    }

                }

            }

            else if (n % 2 == 0 and q.empty()!=1 and r!=0) {

                for (int i = 0; i < n / 2; i++) {
                    s.push(q.top());
                    q.pop();
                }
                int a = q.top();
                q.pop();
                int b= q.top();
                q.pop();

                if(a>b){
                    cout << a << endl;
                    q.push(b);
                }
                if(a<b){
                    cout << b << endl;
                    q.push(a);
                }

                for (int i = 0; i < n / 2; i++) {
                    q.push(s.top());
                    s.pop();
                }
            }

        }while (r != 0);

    }

    return 0;
}