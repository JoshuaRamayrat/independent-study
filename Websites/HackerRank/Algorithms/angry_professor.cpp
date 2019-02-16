#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class classRoom
{
    public:
        classRoom();
        void classCancellation(int thresholdTime, int numStudents);
    private:
        int thresholdTime;
        int numStudents;
};

classRoom::classRoom()
{
    thresholdTime = 0;
    numStudents = 0;
}

void classRoom::classCancellation(int time, int studentCount)
{
    int thresholdCount = 0;
    thresholdTime = time;
    numStudents = studentCount;
    vector<int> timeStamps(numStudents);
    for (int i = 0; i < numStudents; i++)
    {
        cin >> timeStamps[i];
        if (timeStamps[i] <= 0)
        {
            thresholdCount += 1;
        }
    }
    if (thresholdCount < thresholdTime)
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }
    
}

int main()
{
    int t;
    cin >> t;
    
    vector<classRoom> cancellationCase(t);
    for(int a0 = 0; a0 < t; a0++)
    {
        int n;
        int k;
        cin >> n >> k;
        cancellationCase[a0].classCancellation(k, n);
    }
    return 0;
}

