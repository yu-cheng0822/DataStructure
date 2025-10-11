#include <iostream>
#include <vector>
#include<string>
#include<cmath>
using namespace std;

int main() {
	int n,count;
	string x;
	vector<string> S;
	while (cin >> x) {
		S.push_back(x);
	}
	n = S.size();
	count = pow(2, n);
	for (int i = 0; i < count; i++) {
		int num = i;
		cout << "{";
		for (int j = 0; j < n; j++) {
			if (num % 2 == 1)cout << S[j]; 
			num = num / 2;
		}
		cout << "}";
	}

}