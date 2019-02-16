#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

//the first input, characterSet, contains 26 integers describing heights of letters
//str1.find(str2) : this command finds the position of the 1st match of str2 in str1.

class highlighting
{
    public:
        highlighting();
        void computeArea(vector<int> characterSet, string word);
    private:
        int area;
};

highlighting::highlighting()
{
    area = 0;
}

void highlighting::computeArea(vector<int> characterSet, string word)
{
    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    vector<int> wordHeights(word.size());
    for (int i = 0; i < word.size(); i++)
    {
        int pos = alphabet.find(word[i]);        
        wordHeights.push_back(characterSet[pos]);
    }
    int largest = 0;
    for (int i = 0; i < wordHeights.size(); i++)
    {
        if (largest < wordHeights[i])
        {
            largest = wordHeights[i];
        }
    }
    area = word.size()*largest;
    cout << area << endl;
}



int main()
{
    highlighting highlightObject;
    
    vector<int> h(26);
    for(int h_i = 0; h_i < 26; h_i++){
       cin >> h[h_i];
    }
    
    string word;
    cin >> word;
    
    highlightObject.computeArea(h, word);    
    
    return 0;
}

