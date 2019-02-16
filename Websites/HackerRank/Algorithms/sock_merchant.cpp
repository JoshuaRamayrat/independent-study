#include <bits/stdc++.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int sockMerchant(int n, vector <int> ar) 
{       
    vector<int> checkedAlready;
    
    int sellCount = 0;
    int someCount = 1;
    
    for (int i = 0; i < n; i++)
    {
        //cout << "We're at ar[i]: " << ar[i] << endl;
        for (int j = i+1; j < n; j++)
        {
            //cout <<"We're at ar[j]: " << ar[j] << endl;
            
            //test to see if ar[i] == ar[j] and if ar[i] is not in the checkedAlready vector.
            if (ar[i] == ar[j] && 
                find(checkedAlready.begin(), checkedAlready.end(), ar[i]) == checkedAlready.end())
            {
                //cout << "ar[" << i << "] matches with ar[" << j << "]" << endl;
                //cout << ar[i] << " = " << ar[j] << endl;
                someCount += 1;
                //cout << "someCount value: " << someCount << endl;
            }               
        }
        //cout << "Inner for loop done" << endl << endl;
        checkedAlready.push_back(ar[i]);

        
        someCount = someCount / 2;
        sellCount += someCount;
        someCount = 1;
    }
        
    return sellCount;

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}

