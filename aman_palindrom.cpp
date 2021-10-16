#include <bits/stdc++.h>
using namespace std;

int main(){
	int n ;
	cin >> n;
	int arr[n];
	for(int i = 0; i< n ; i++){
		int x;
		cin >> x;
		arr[i] = x;
	}	

	for(auto x : arr){
		cout << x << " ";
	}

	return 0;
}