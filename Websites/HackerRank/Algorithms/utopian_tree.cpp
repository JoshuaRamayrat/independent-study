#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//The problem asks to compute the growth of a "utopia tree" where its initial height is 1 meter and it grows in two cycles per year.
//1st cycle in spring - double in height
//2nd cycle in summer - add 1 meter to its height

//1st input: 'x' number of cycle inputs
//following inputs: 'x' number of inputs asking for the number of cycles each time.

class utopiaTree
{
    public:
        utopiaTree();
        //~utopiaTree();      
        void printHeight();
        void computeGrowth(int numberOfCycles);
    private:
        int height; 
};

utopiaTree::utopiaTree()
{
    height = 1;
}

void utopiaTree::printHeight()
{
    cout << height << endl;
}

void utopiaTree::computeGrowth(int numberOfCycles)
{
    for (int i = 1; i <= numberOfCycles; i++)
    {
        if ( i%2 != 0 )
        {
            height = height*2;
        }
        if ( i%2 == 0)
        {
            height += 1;
        }
    }
    cout << height << endl;
}

int main()
{
    
    int t;
    cin >> t;
    
    vector<utopiaTree> treeVec(t);
    
    // calling computeGrowth in the 'for loop'
    for (int i = 0; i < t; i++)
    {
        treeVec[i];
        int n;
        cin >> n;
        treeVec[i].computeGrowth(n);
    }
     
    return 0;
}

