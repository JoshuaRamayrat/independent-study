#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++)
    {
       cin >> a[a_i];
    }
    
    vector< vector<int> > absDiffOneVectors;
    
    for (int i = 0; i < n; i ++)
    {
        vector<int> tempVec;
        for (int k = 0; k < n; k++)
        {
            //cout << "a[i] - a[k]: " << a[i] - a[k] << endl;
            if ( (a[i]-a[k]) == 0 )
            {
                tempVec.push_back(a[k]);
            }
            if ( (a[i]-a[k]) == 1 )
            {
                tempVec.push_back(a[k]);
            }
        }
        //cout << "tempVec.size(): " << tempVec.size() << endl;
        //cout << endl;
        absDiffOneVectors.push_back(tempVec);
    }
    
    int largest = 0;
    for (int i = 0; i < absDiffOneVectors.size(); i++)
    {
        if (largest < absDiffOneVectors[i].size())
        {
            largest = absDiffOneVectors[i].size();
        }
    }
    
    cout << largest << endl;
    return 0;
}

