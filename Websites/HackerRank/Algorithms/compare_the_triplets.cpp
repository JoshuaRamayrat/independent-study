#include <bits/stdc++.h>

using namespace std;


vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2)
{

    vector <int> result{0, 0};
    vector <int> a{a0, a1, a2};
    vector <int> b{b0, b1, b2};
    for (int i=0; i<3; i++)
    {
        if (a[i] > b[i]) { result[0]+=1;}
        if (a[i] < b[i]) { result[1]+=1;}
    }
    
    return result;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}

