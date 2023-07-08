#include<iostream>

using namespace std;

int isPa(int *arr) {
	int sum = 0;
	for (int i = 0; i < 26; i++) sum += arr[i] & 1;
	return sum;
}

int main() {
	int s[26] = {0};

	char c;
	while (cin >> c) s[c - 'a']++;

	for (int &i : s) {
		if (i % 2 == 0) {
			i = 0;
		} else { i = 1; }
	}

	int t = isPa(s);

	cout << ((t == 0 || t & 1) ? "First" : "Second");
	
}
