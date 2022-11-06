#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int showpq(priority_queue <int> gq,int max)
{
    priority_queue <int> g = gq;
    int pop=0;
    int comp = max;


    do{

        cout << g.top();
        cout <<" ";
        g.pop();
        pop++;
        comp--;

    } while (!g.empty() and comp == g.top());

    cout << '\n';
    return pop;
}


int main() {
    vector <int>a;
    int n;
    cin >>n;


    for(int i=0;i<n;i++){
        int x;
        cin >> x;

        a.push_back(x);
    }

    int max;
    int i=0;
    priority_queue <int> snack_towar;


    while(a[n-1]!=-1){

        int pop;

        do{
            max =*max_element(a.begin(),a.end());
            snack_towar.push(a[i]);
            a[i]=-1;
            i++;

            if(snack_towar.top() != max){
                cout <<" "<<endl;
            }

        }while (snack_towar.top() != max);

       pop = showpq(snack_towar,max);

       while(pop--){
           snack_towar.pop();
       }
    }

    return 0;
}