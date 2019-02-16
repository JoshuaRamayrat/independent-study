#include <bits/stdc++.h>

using namespace std;

//this function takes a vector and the amount of rotations it wants to do as arguments.
vector <int> leftRotation(vector <int> a, int d) {

	for (int i = 0; i < d; i++) {
		a.push_back(a[0]);
		a.erase(a.begin() );
	}

	return a;
}

int main() {
    int n;
    int d;
    cin >> n >> d;

    //declared a vector of ints with 'n' elements.
    vector<int> a(n);

    for(int a_i = 0; a_i < n; a_i++){

        cin >> a[a_i];

    }

    
    vector <int> result = leftRotation(a, d);

    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;

    return 0;
}






