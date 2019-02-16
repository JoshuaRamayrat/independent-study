#include <bits/stdc++.h>

using namespace std;

vector<long int> declareVec(long int n);

vector<long int> declareVec(long int n){
    vector<long int> arr(n);
    for(long int arr_i = 0; arr_i < 5; arr_i++){ cin >> arr[arr_i]; }
    return arr;
}

int main() 
{
    
    vector<long int> testVec = declareVec(5);
    long int size = testVec.size();
    
    vector<long int> sumOfNumbers(5, 0);
    long int numToSkip = 0;
    
    for (long int j = 0; j < size; j++)
    {
        for (long int i = 0; i < size; i++)
        {
            sumOfNumbers[j] = sumOfNumbers[j] + testVec[i];        
        }
        sumOfNumbers[j] -= testVec[numToSkip];
        numToSkip+=1;
    }
    
    long int largest = sumOfNumbers[0];
    long int smallest = sumOfNumbers[0];
    for (long int k = 0; k < size; k++){
        if (sumOfNumbers[k] > largest){ largest = sumOfNumbers[k];}
        if (sumOfNumbers[k] < smallest){ smallest = sumOfNumbers[k];}
    }
    
    cout << smallest << " " << largest << endl;
        
    return 0;
}

