#include <bits/stdc++.h>
//Giai thua chia du
using namespace std;
long long F[1000001];
int mod = 1e9 +7;
void ktao(){
	F[0] = 1; // 0!
	for(int i = 1; i <= 1000000; i++){
		F[i] = i * F[i - 1];
		F[i] %= mod;
	}
}
int main(){
	ktao();
	int t; cin >> t;
	int n;
	while(t){
		cin >> n;
		cout << F[n] << endl;
		t--;
	}
	return 0;
}
