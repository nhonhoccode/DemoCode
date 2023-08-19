#include <bits/stdc++.h>

using namespace std;
long long F[1000001];
int mod = 1e9 + 7;
void ktao(){
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 1000000; i++){
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= mod;
	}
}
int main(){
	ktao();
	int t; cin >> t;
	fflush(stdin);
	int n;
	while(t--){
		cin >> n;
		cout << F[n] << endl;
	}
	return 0;
}
