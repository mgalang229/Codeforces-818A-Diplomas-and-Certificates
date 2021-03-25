#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	long long n, k;
	cin >> n >> k;
	// view the image in this repository
	// for the derivation of the formula
	long long diplomas = n / (2 * (1 + k));
	long long certificates = diplomas * k;
	long long not_winners = n - (diplomas + certificates);
	cout << diplomas << " " << certificates << " " << not_winners << '\n';
	return 0;
}
