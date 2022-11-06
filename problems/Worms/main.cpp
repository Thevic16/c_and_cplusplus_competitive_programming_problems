#include <iostream>
#include <vector>

//nombre del problema = B.worms
using namespace std;
/*
int suma(vector <long int>&a,long int limite){

	int sumatoria =0;

	for(int i=0;i<limite;i++){

		a[i+1] = a[i]+a[i+1];
	}

	return sumatoria;
}
*/
/*
long int r (vector <long int>&a,long int n,long int q){

    long int b=q;
    long int cont =0;

    for(long int i=0;i<n;i++){
        b -= a[i];
        cont++;
        if(b<=0)
            return cont;
    }

    return cont;
}
 */

int main (){
    long int n; cin >> n;
    long int m;
    vector <long int> a;
    vector <long int>q;

    for(long int i=0;i<n;i++){

        long int x; cin >> x;

        a.push_back(x);
    }

    //modificacion de a.
    for(int i=0;i<n-1;i++){
        a[i+1] = a[i]+a[i+1];
    }

    cin >>m;

    for(long int i=0;i<m;i++){

        long int y; cin >> y;

        q.push_back(y);
    }

     int i=0;
    while(m--) {
       long int low = 0;
       long int high = n;
       long int mid = 0;

        while (low <= high) {

            mid = low + (high-low)/2;
            if (a[mid] < q[i])
                low = mid + 1;

            else
                high = mid - 1;

        }
        i = i + 1;
        cout << low +1<< endl;
    }

    /*
    long int i=0;

    while(m--){

       cout << r(a,n,q[i])<< endl;
        i++;

    }
    */

    return 0;
}