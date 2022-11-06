#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    long int a[3];
    long int b[3];

    cin>> t;

    while(t--) {

        long int sum = 0;

        cin >> a[0] >> a[1] >> a[2];
        cin >> b[0] >> b[1] >> b[2];


        while (a[2] > 0) {

            if (b[1] > 0) {

                long int d = b[1] - a[2];

                if (d >= 0) {
                    sum = sum + a[2] * 1 * 2;
                    b[1] = d;
                    a[2] = 0;
                } else {
                    sum = sum + b[1] * 1 * 2;
                    b[1] = 0;
                    a[2] = -d;
                }
            } else if (b[2] > 0) {

                long int d = b[2] - a[2];

                if (d >= 0) {
                    b[2] = d;
                    a[2] = 0;
                } else {
                    b[2] = 0;
                    a[2] = -d;
                }

            } else if (b[0] > 0) {

                long int d = b[0] - a[2];

                if (d >= 0) {
                    b[0] = d;
                    a[2] = 0;
                } else {
                    b[0] = 0;
                    a[2] = -d;
                }

            }

        }

        while (a[0] > 0) {

            if (b[2] > 0) {

                long int d = b[2] - a[0];

                if (d >= 0) {
                    b[2] = d;
                    a[0] = 0;
                } else {
                    b[2] = 0;
                    a[0] = -d;
                }
            } else if (b[1] > 0) {

                long int d = b[1] - a[0];

                if (d >= 0) {
                    b[1] = d;
                    a[0] = 0;
                } else {
                    b[1] = 0;
                    a[0] = -d;
                }

            } else if (b[0] > 0) {

                long int d = b[0] - a[0];

                if (d >= 0) {
                    b[0] = d;
                    a[0] = 0;
                } else {
                    b[0] = 0;
                    a[0] = -d;
                }

            }

        }

        while (a[1] > 0) {

            if (b[1] > 0) {

                long int d = b[1] - a[1];

                if (d >= 0) {
                    b[1] = d;
                    a[1] = 0;
                } else {
                    b[1] = 0;
                    a[1] = -d;
                }
            } else if (b[0] > 0) {

                long int d = b[0] - a[1];

                if (d >= 0) {
                    b[0] = d;
                    a[1] = 0;
                } else {
                    b[0] = 0;
                    a[1] = -d;
                }

            } else if (b[2] > 0) {

                long int d = b[2] - a[1];

                if (d >= 0) {
                    sum = sum + (-a[1] * 2 * 1);
                    b[2] = d;
                    a[1] = 0;
                } else {
                    sum = sum + (-b[2] * 2 * 1);
                    b[2] = 0;
                    a[1] = -d;
                }

            }

        }



        /*
        for (int i = 0; i < 3; ++i) {
            cout <<"a["<<i<<"]="<<a[i]<<endl;
            cout <<"b["<<i<<"]="<<b[i]<<endl;
        }
        */

        cout << sum<<endl;
    }
    return 0;
}