#include <iostream>
#include <queue>
#include <stack>
#include <algorithm>

using namespace std;

void reverse_queue(queue <int> & q){
    stack <int> s;

    while(q.empty()!=1){
        s.push(q.front());
        q.pop();
    }

    while(s.empty()!=1){
        q.push(s.top());
        s.pop();
    }

}

int main() {

   queue <int>q;
   int k;
   cin >>k;

   while(k--) {
       string query;
       cin >> query;
       int opciones;
       int n;

       if (query == "back") {
           opciones = 1;
       }
       if (query == "front") {
           opciones = 2;
       }
       if (query == "reverse") {
           opciones = 3;
       }
       if (query == "push_back") {
           cin >> n;
           opciones = 4;
       }
       if (query == "toFront") {
           cin >> n;
           opciones = 5;
       }


       switch (opciones) {
           case 1:
               if (q.empty() == 1) {
                   cout << "No job for Ada?" << endl;
               } else {
                   cout << q.back() << endl;
                   reverse_queue(q);
                   q.pop();
                   reverse_queue(q);
               }
               break;

           case 2:
               if (q.empty() == 1) {
                   cout << "No job for Ada?" << endl;
               } else {
                   cout << q.front() << endl;
                   q.pop();
               }
               break;

           case 3:
               if(q.empty()==1){
                   cout << "No job for Ada?" << endl;
               }
               else reverse_queue(q);

               break;

           case 4:
               q.push(n);
               break;
           case 5:
               reverse_queue(q);
               q.push(n);
               reverse_queue(q);
               break;
       }

   }

    return 0;
}