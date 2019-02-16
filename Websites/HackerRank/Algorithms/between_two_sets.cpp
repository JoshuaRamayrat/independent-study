#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector <int> a, vector <int> b) 
{
    int allOfA = 0;
    int verifyA = 0;
    
    int allOfB = 0;
    int verifyB = 0;
    
    int numOccurences = 0;
    
    for (int i = a[a.size()-1]; i <= b[0]; i++)
    {
        
        for (int j = 0; j < a.size(); j++)
        {
            //cout << "Comparing " << i << " with " << a[j] << "." << endl;
            
            if (i % a[j] == 0)
            {
                verifyA += 1;
            }
            if (verifyA == a.size())
            {
                allOfA += 1;
            }
        }
        //cout << "For loop for A ends here." << endl;
        //cout << "Final value of verifyA: " << verifyA << endl;
        //cout << "Final value of allOfA: " << allOfA << endl;
        //cout << endl << endl;

        
        for (int k = 0; k < b.size(); k ++)
        {
            //cout << "Comparing " << i << " with " << b[k] << "." << endl;

            if (b[k] % i == 0)
            {
                verifyB += 1;
            }
            if (verifyB == b.size())
            {
                allOfB += 1;
            }
        }
        //cout << "For loop for B ends here." << endl;
        //cout << "Final value of verifyB: " << verifyA << endl;
        //cout << "Final value of allOfB: " << allOfB << endl;
        //cout << endl << endl;
        
        
        if (allOfA == 1 && allOfB == 1)
        {
            numOccurences += 1;
        }
        
        verifyA = verifyB = allOfA = allOfB = 0;
    }
    
    return numOccurences;
}

int main() {
    int n;
    int m;
    
    cin >> n >> m;
    
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++)
    {
       cin >> a[a_i];
    }
    
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++)
    {
       cin >> b[b_i];
    }
    
    int total = getTotalX(a, b);
    cout << total << endl;
    
    return 0;
}

