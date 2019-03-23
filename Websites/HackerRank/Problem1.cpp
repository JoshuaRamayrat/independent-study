#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct moreStuff{
    vector<string> strList;
};

int main() {
    
    moreStuff stuff;
    int wordCount;
    cin >> wordCount;
    
    for (int i = 0; i < wordCount; i++){
        string wordInput;
        cin >> wordInput;
        
        stuff.strList.push_back(wordInput);
    }
    
    int wordMatch;
    cin >> wordMatch;
    
    vector<string> compareStrings;
    
    for (int i = 0; i < wordMatch; i++){
        string wordIn;
        cin >> wordIn;
        compareStrings.push_back(wordIn);
    }
    
    for (int i = 0; i < wordMatch; i++){
        
        int outputNumber = 0;
        
        for (int k = 0; k < wordCount; k++){
            if (compareStrings[i] == stuff.strList[k]){
                outputNumber += 1;
            }
        }
    
        cout << outputNumber << endl;
    
    }
    
    
    return 0;
}

