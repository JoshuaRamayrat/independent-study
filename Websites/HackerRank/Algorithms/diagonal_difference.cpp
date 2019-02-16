#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    
    int diagonalSum1 = 0;
    int diagonalSum2 = 0;
    
    int x = 0;
    int y = 0;
    
    for (int i = 0; i < n; i++){
        diagonalSum1 = diagonalSum1 + a[x][y];
        x += 1; y += 1;
    }
    
    int v = 0;
    int b = n-1;
    
    for (int i = 0; i < n; i++){
        diagonalSum2 = diagonalSum2 + a[v][b];
        v += 1; b -= 1;
    }
    
    int difference = abs(diagonalSum1-diagonalSum2);
    cout << difference << endl;
    return 0;
}

