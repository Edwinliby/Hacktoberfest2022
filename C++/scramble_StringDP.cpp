#include <bits/stdc++.h>
using namespace std;

unordered_map<string, bool> mp;//Globally declared map

bool isScramble(string S1, string S2)
{
	// Strings of non-equal length cant' be scramble strings
	if (S1.length() != S2.length()) {
		return false;
	}

	int n = S1.length();

	// Empty strings are scramble strings
	if (n == 0) {
		return true;
	}

	// Equal strings are scramble strings
	if (S1 == S2) {
		return true;
	}
	// Checking the condition of anagram
	string copy_S1 = S1, copy_S2 = S2;

	sort(copy_S1.begin(), copy_S1.end());
	sort(copy_S2.begin(), copy_S2.end());

	if (copy_S1 != copy_S2) {
		return false;
	}

	// make key of type string for search in map
	string key = (S1 + " " + S2);
	// checking if both string are before calculated or not
	// if calculated means find in map then return it's value
	if (mp.find(key) != mp.end()) {
		return mp[key];
	}

	// declaring flag variable to store result
	bool flag = false;

	for (int i = 1; i < n; i++) {

		// Check if S2[0...i] is a scrambled
		// string of S1[0...i] and if S2[i+1...n]
		// is a scrambled string of S1[i+1...n]
		if (isScramble(S1.substr(0, i), S2.substr(0, i))
			&& isScramble(S1.substr(i, n - i),
						S2.substr(i, n - i))) {
			flag = true;
			return true;
		}

		// Check if S2[0...i] is a scrambled
		// string of S1[n-i...n] and S2[i+1...n]
		// is a scramble string of S1[0...n-i-1]
		if (isScramble(S1.substr(0, i), S2.substr(n - i, i))
			&& isScramble(S1.substr(i, n - i),
						S2.substr(0, n - i))) {
			flag = true;
			return true;
		}
	}

	// add key & flag value to map (store for future use)
	// so next time no required to calculate it again
	mp[key] = flag;

	// If none of the above conditions are satisfied
	return false;
}

int main()
{
	string S1 = "coder";
	string S2 = "ocred";

	if (isScramble(S1, S2)) {
		cout << "Yes" <<endl;
	}
	else {
		cout << "No" <<endl;
	}

	return 0;
}
