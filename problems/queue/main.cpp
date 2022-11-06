#include <iostream>
#include <queue>

using namespace std;

int main() {

    queue <int> myqueue;

    myqueue.push(1);
    myqueue.push(14);
    myqueue.push(70);



  // bool empty = myqueue.empty();

  //  int size = myqueue.size();

  // int b= myqueue.back();
  int f= myqueue.front();

    cout << f<<endl;
  //  cout << size << endl;
  //  cout << b;

    return 0;
}