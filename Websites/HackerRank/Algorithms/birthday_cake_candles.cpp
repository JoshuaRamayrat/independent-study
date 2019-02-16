#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) 
{
    int largest = ar[0];
    int numberOfCandles = 0;

    for (int i = 0; i < n; i++){
        if (largest < ar[i]){ largest = ar[i];}
    }
    for (int i = 0; i < n; i++){
        if (largest == ar[i]){numberOfCandles += 1;}
    }
    return numberOfCandles;

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

