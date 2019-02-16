#include <bits/stdc++.h>
#include <math.h>

using namespace std;

int solve(int n, int p)
{
    if (n % 2 == 1)
    {
       n -= 1;     
    }
    if (p % 2 == 1)
    {
        p -= 1;
    }    
    if ( (n - p) > p)
    {
        return p/2;
    }
    else
    {
        return (n-p) / 2;
    }
    /*
    //p is always the smaller of the two
    //turn both the numbers, n and p, into even numbers.
    //cout << "n & p: " << n << " " << p << endl;
    if (n % 2 == 1)
    {
       n -= 1;     
    }
    if (p % 2 == 1)
    {
        p -= 1;
    }
    //cout << "n & p now: " << n << " " << p << endl;  
    
    int numberOfPages = 0;
    int difference1 = abs(n - p);
    int difference2 = abs(1 - p);
    
    
    
    if (difference1 > difference2)
    {
        //cout << "d1 greater" << endl;
        //start at "page 0" and increment by two until you get to "page p".
        
        for (int i = 1; i <= p; i += 2)
        {
            //cout << "+" << endl;
            numberOfPages += 1;
        }
        
        numberOfPages = p/2;
    }
    
    if (difference1 < difference2)
    {
        //cout << "d2 greater" << endl;
        
        for (int i = n; i > p; i -= 2)
        {
            cout << "val: " << i << endl;
            numberOfPages += 1;
        }
        numberOfPages = (n-p)/2;
    }
    
    return numberOfPages;
    ///////////////////////////////////////////////////
    ///////////////////////////////////////////////////
    */
}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}

