#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main() {
    string wire_tangle;
    cin >> wire_tangle;

    reverse(wire_tangle.begin(),wire_tangle.end());

    stack <char> myqueue;
    int length =wire_tangle.length();
    if(length %2 !=0){
        cout <<"No";
        return 0;
    }

    for(int i=0;i<length;i++){
        myqueue.push(wire_tangle[i]);
    }

    char a = ' ';
    stack <char> s;

    int cont =0;



 while (myqueue.empty() != 1 or s.empty() != 1) {
//cout << "prueba"<<endl;
    a= ' ';

    if(myqueue.size() > 1){
        a = myqueue.top();
        myqueue.pop();
        }
    //cout <<myqueue.size()<<endl;
    //cout <<"a "<<a<<endl;
    //cout <<"top  "<<myqueue.top()<<endl;

     if(a==myqueue.top()){
        myqueue.pop();
        }
    else if(a!=' '){
        //cout << a <<endl;
        s.push(a);
        cont++;
        }

     if(s.size()==length-1 and myqueue.size() ==1){
         cout << "No";
         return 0;
     }

    if(myqueue.size() == 1 and s.size() > 0){
        for(int i=0;i<cont;i++) {
            int x;
            x= s.top();
            s.pop();
            myqueue.push(x);
             }
        cont =0;
    }

    //cout << "pila1 "<<myqueue.size()<<endl;
    // cout<<"pila2 "<<s.size()<<endl;

 }

cout << "Yes";

    return 0;
}