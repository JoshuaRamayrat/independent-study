#include <bits/stdc++.h>

using namespace std;

int divisibleSumPairs(int n, int k, vector <int> ar) 
{
    int testNumber;
    int occurences = 0;
    
    for (int i = 0 ; i < n-1; i++)
    {
        //cout << "ar[i] value: " << ar[i] << endl;
        for (int j = i+1; j < n; j++)
        {
            //cout << "ar[j] value: " << ar[j] << endl;
            testNumber = ar[i] + ar[j];
            //cout << "Curent test value: " << testNumber << endl;
            //cout << "result: " << testNumber%k << endl;  
            //cout << endl;
            //cout << "occurences: " << occurences << endl;
            if ((testNumber%k) == 0)
            {
               // cout << "occurences: " << occurences << endl;
                occurences += 1; 
            }
        }
    }
    return occurences;
}

int main() {
    int n;
    int k;
    cin >> n >> k;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = divisibleSumPairs(n, k, ar);
    cout << result << endl;
    return 0;
}

