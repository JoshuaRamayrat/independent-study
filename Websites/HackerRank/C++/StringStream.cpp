#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) 
{
  vector<int> returnVec;

  // Loop through the string or input-string and replace all commas with spaces.

  for (int i = 0; i < static_cast<int>(str.size() - 1); i++) {
    if (str[i] == ',') {
      str[i] = ' ';
    }
  }

  // cout << "This is the modified str: " << str << endl;

  stringstream ss(str);

  for (int num; ss >> num;) {
    returnVec.push_back(num);
  }

  // cout << "test" << endl;

  return returnVec;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) 
    {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
