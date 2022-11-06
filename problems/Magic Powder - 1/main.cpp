#include <bits/stdc++.h>

using namespace std;

int lower(vector <int>a, vector <int>b,int n){

		float low =b[0]/a[0];
		int ind_low =0;

		float comp;

	for(int k=1;k<n;k++){
		comp = b[k]/a[k];

		if(comp <low){
			low=comp;
			ind_low=k;
		}
	}

	return ind_low;

}

int main (){
	int n;
	int k;
	cin >> n;
	cin >> k;

	vector <int> a;
	vector <int> b;

	for(int i=0;i<n;i++){

		int x; cin >> x;

		a.push_back(x);
	}

	for(int i=0;i<n;i++){

		int y; cin >> y;

		b.push_back(y);
	}

	//inicio del la sulucion del problema.

	int ind_low;

	do{
	ind_low = lower(a,b,n);

	b[ind_low]++;

	}while (--k);

    ind_low = lower(a,b,n);
	cout << b[ind_low]/a[ind_low];


	return 0;
}