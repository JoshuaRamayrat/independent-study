#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }
    
    float fracPositive = 0;
    float fracNegative = 0;
    float fracZero = 0;
    
    for (int i = 0; i < arr.size(); i++){
        if (arr[i] < 0){ fracPositive += 1;}
        if (arr[i] > 0){ fracNegative += 1;}
        if (arr[i] == 0){ fracZero += 1;}
    }
    
    float size = (float)arr.size();

    cout << fracNegative/size << endl;
    cout << fracPositive/size << endl;
    cout << fracZero/size << endl;
    
    return 0;
}

