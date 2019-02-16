#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int bonAppetit(int n, int k, int b, vector <int> ar) 
{
    int totalPrice = 0;
    for(int i = 0; i < n; i++)
    {
        if(i != k)
        {
            totalPrice += ar[i];
        }
    }
    int chargePrice = totalPrice / 2;
    //cout << "Total Price: " << totalPrice << endl;
    //cout << "Charge Price: " << chargePrice << endl;
    //cout << "Difference (chargePrice - b): " << (chargePrice-b) << endl;
    if ((chargePrice - b) == 0)
    {
        return 0;
    } else 
    {
        int difference = abs(b-chargePrice);
        return difference;
    }

}

int main() 
{    
    int n;
    int k;
    cin >> n >> k;
    
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    
    int b;
    cin >> b;
    
    int result = bonAppetit(n, k, b, ar);
    
    if (result == 0)
    {
        cout << "Bon Appetit" << endl;
    } 
    if (result != 0)
    {
        cout << result << endl;
    }
    return 0;
}

