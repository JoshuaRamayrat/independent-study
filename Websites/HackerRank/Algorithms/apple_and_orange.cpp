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
    int appleOccurances = 0;
    int orangeOccurances = 0;
    
    int s; //start distance of house
    int t; //end distance of house
    cin >> s >> t;
    
    int a; //position of apple tree
    int b; //position of orange tree
    cin >> a >> b;
    
    int m; // number of distances for the apple.
    int n; // number of distances for the orange.
    cin >> m >> n;
    
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++)
    {
       cin >> apple[apple_i];
       int distance = a+apple[apple_i];
           
       if (distance >= s && distance <= t){appleOccurances += 1;}

    }
    
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++)
    {
       cin >> orange[orange_i];
       int distance = b + orange[orange_i];
        
       if (distance >= s && distance <= t){orangeOccurances += 1;}
    }
    cout << appleOccurances << endl;
    cout << orangeOccurances << endl;
    return 0;
}

