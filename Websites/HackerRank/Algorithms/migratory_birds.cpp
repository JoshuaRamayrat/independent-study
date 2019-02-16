#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

int migratoryBirds(int n, vector <int> ar) 
{
    //vector <int> typeNum(ar.size());
    //iota(typeNum.begin(), typeNum.end(), 1);
    //Section of code is to print out typeNum. You can comment this out later if you want.
    /*
    for (int i = 0; i < typeNum.size(); i++)
    {
        //cout << "Value @ typeNum[i]: " << typeNum[i];
    }
    */
    //Declaration of a vector of 0's the size of typeNum.
    //This is to count the occurences of each type of bird in ascending order from 1 to ar.size()
    
    vector <int> typeOccurrence(ar.size());   
    
    for (int i = 0; i < ar.size(); i++)
    {
        //cout << "ar[i]: " << ar[i] << endl;
        //cout << "typeOccurrence[ar[i]]: " << typeOccurrence[ar[i]] << endl;
        typeOccurrence[ar[i]-1] += 1;
        
    }
    
    int index = 0;
    int largest = 0;
    for (int i = 0; i < typeOccurrence.size(); i++)
    {
        if ((largest < typeOccurrence[i]))
        {
            largest = typeOccurrence[i];
            index = i+1;
        }
    }
    
    //the first occurrence of the largest 
    return index;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
