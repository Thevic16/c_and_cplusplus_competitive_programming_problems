#include <iostream>
#include <cmath>

using namespace std;
long long int fibonacciModified(int t1,int t2,long long int n){
    if(n==1){
        return t1;
    }
    else if(n==2){
        return t2;
    }

    return fibonacciModified(t1,t2,n-2) + pow(fibonacciModified(t1,t2,n-1),2);
}

int main() {
    int t1;
    int t2;
    long long int n;
    cin >> t1 >> t2 >> n;

    cout << fibonacciModified(t1,t2,n);

    return 0;
}

/*
 * def fibonacciModified(t1,t2,n):
    if(n==1):
        return t1

    if(n==2):
        return t2


    return fibonacciModified(t1,t2,n-2) + pow(fibonacciModified(t1,t2,n-1),2)

def main():
     t1 = int(input())
     t2 = int(input())
     n = int(input())

     print(f'{fibonacciModified(t1, t2, n)}')
 */