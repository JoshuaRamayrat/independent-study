#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int solve(int n, vector < int > s, int d, int m)
{
    int occurence = 0;
    int finalValue = 0;
    // m consecutive squares whose integers sum to d.
    for (int k = 0; k < n-m+1; k++)
    {
        //cout << "Occurence count: " << occurence << endl;
        int sum = 0;
        for (int i = k; i < k+m; i++)
        {
            sum += s[i];
            //cout << " summing with " << s[i] << endl;
        }       
        if (sum == d) 
        {    
            occurence++;
        } else {
            //cout << "Not equal" << endl;
            continue;
        }
        //cout << "sum: " << sum << endl;
    }
    
    return occurence;
}

int main() {
    int n; // number of squares.
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    int d; // value of ron's birthday.
    int m; // ron's month value.
    cin >> d >> m;
    int result = solve(n, s, d, m);
    cout << result << endl;
    return 0;
}

