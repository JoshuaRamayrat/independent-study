#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    int smallest = s[0];
    int largest = s[0];
    
    int smallOccurences = 0;
    int largeOccurences = 0;
    
    for (int i = 0; i < s.size(); i++)
    {
        if (smallest > s[i])
        {
            smallOccurences += 1;
            smallest = s[i];
        }
        if (largest < s[i])
        {
            largeOccurences += 1;
            largest = s[i];
        }
    }
    
    vector <int> output(2);
    
    output[0] = largeOccurences;
    output[1] = smallOccurences;
    
    return output;
    
    
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
