#include <iostream>
#include <stack>
#include <algorithm>


using namespace std;

int main() {
    int n;
    cin >> n;

    int hist[n];

    for(int i=0;i<n;i++){
        cin >> hist[i];
    }

    stack<int> s;

    int max_area =0;
    int tp;
    int area_with_top;

    int i = 0;

    while (i < n) {

    if (s.empty() or hist[s.top()] <= hist[i]) {
        s.push(i);
        i++;
        cout <<"s["<<i<<"]="<<s.top()<<endl;
    }
    else{
        tp=s.top();
        cout<<"tp["<<i<<"]="<<s.top()<<endl;
        s.pop();
        cout <<"s.empty="<<s.empty()<<endl;

        area_with_top = hist[tp] * (s.empty() ? i :i - s.top() - 1);
        cout<<"area with top="<<"hist[tp]*(w)"<<"="<<hist[tp]<<"*"<<(s.empty() ? i :i - s.top() - 1)<<"="<<area_with_top<<endl;

        if (max_area < area_with_top)
            max_area = area_with_top;

            cout <<" "<<endl;
    }

    }

    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = hist[tp] * (s.empty() ? i :
                                    i - s.top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    cout << max_area;
    return 0;
}




