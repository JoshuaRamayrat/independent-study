#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n;
    long int m;
    
    // This part's asking for the number of elements in the list and the number of queries in the second input, m.
    cin >> n >> m;
    
    long int intArr(n);
    
    for(int a0 = 0; a0 < m; a0++){
        
        long int a;
        long int b;
        long int k;
        
        cin >> a >> b >> k;
        
        for (long int i = a-1; i <= b-1; i++){
            intArr[i] += k;
        }
        /*
        for (int i = 0; i < n; i++){
            cout << intVec[i] << " ";
        }
        cout << endl;
         */
    }
    
    long int largest = intArr[0];
    
    for (long int i = 1; i < n; i++){
        if (intVec[i] > largest){
            largest = intVec[i];
        }
    }

    cout << largest;
    
    return 0;
}

