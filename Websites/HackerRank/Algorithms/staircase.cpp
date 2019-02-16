#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){

    int n;
    cin >> n;
    
    int spaceNum = n-1;    
    int hashNum = 1;
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < spaceNum; j++){ cout << " ";}
        spaceNum -= 1;
        for (int k = 0; k < hashNum; k++){ cout << "#";}
        hashNum += 1;
        cout << endl;
    }
    
    return 0;
}

