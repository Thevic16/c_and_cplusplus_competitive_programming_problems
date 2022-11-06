#include <iostream>
#include <stack>

// Stack.. pila
using namespace std;

int main() {

    stack<int>mystack;

    mystack.push(1);
    mystack.push(5);
    mystack.push(6);

    //int x =mystack.top();
    //cout << x;
    //mystack.pop();
   //int y =mystack.top();
    //cout << y;

    //bool empty = mystack.empty();
    int size = mystack.size();
    cout << size;

    return 0;
}