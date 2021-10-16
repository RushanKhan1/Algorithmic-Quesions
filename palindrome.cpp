#include <bits/stdc++.h>
using namespace std;

int main(){
	string s = "hannah";
	int j = s.length() - 1;
	for(int i = 0; i< s.length(); i++){
		if(s[i] == s[j]){
			j--;
			continue;
		}
		else{
			cout << "string is not a palindrom";
			return 0;	
		}


	}	
	cout << "String is palindrome";

}