#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    int inputSize = 0;
    string strUD;
    cin >> inputSize;
    cin >> strUD;
    
    int currentPosition = 0;
    int passedSeaLevel = 0;
    
    int mountainCount = 0;
    int valleyCount = 0;
    
    for (int i = 0; i <= inputSize; i++)
    {
        //cout << "Current position: " << currentPosition << endl;
        //cout << "passedSeaLevel: " << passedSeaLevel << endl;

        
        if (strUD[i] == 'U')
        {
            currentPosition += 1;
        }
        if (strUD[i] == 'D')
        {
            currentPosition -= 1;
        }
        if (currentPosition > passedSeaLevel && passedSeaLevel == 0)
        {
            //cout << "Mountain!" << endl;
            mountainCount += 1;
            passedSeaLevel += 1;
        }
        if (currentPosition < passedSeaLevel && passedSeaLevel == 0)
        {
            //cout << "Valley!" << endl;
            valleyCount += 1;
            passedSeaLevel += 1;
        }
        if (currentPosition == 0)
        {
            //cout << "currentPosition = 0!" << endl;
            passedSeaLevel = 0;
        }
    }
    cout << valleyCount << endl;
    return 0;
}

