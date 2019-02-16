#include <bits/stdc++.h>

using namespace std;

string kangaroo (int x1, int v1, int x2, int v2) 
{
    string answer;
    signed int difference = x1-x2;
    signed int denomDiff = v2-v1;
    signed int otherGuy = difference/denomDiff;
    if(denomDiff == 0 && x1 != x2){ answer = "NO"; return answer;}
    if ( difference%(v2-v1) != 0 || otherGuy < 0){ answer = "NO";}
    else{ answer = "YES";}
    return answer; 
}

int main() 
{
    int x1;
    int v1;
    int x2;
    int v2;
    cin >> x1 >> v1 >> x2 >> v2;
    string result = kangaroo(x1, v1, x2, v2);
    cout << result << endl;
    return 0;
}

