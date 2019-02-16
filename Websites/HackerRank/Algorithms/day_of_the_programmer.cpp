#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year) 
{

    int February; 
    int month[] = {31, February, 31, 30, 31, 30, 31, 31, 30, 31, 30};

    if (year % 400 == 0 && year > 1918 || 
        year % 4 == 0 && year % 100 != 0 && year > 1918 ||
        year % 4 == 0 && year < 1918)
        {
            month[1] = 29;
        } else 
        {
            month[1] = 28;
        } 
    if (year == 1918){month[1] -= 13;}

    int totalDays = 0;
    int monthIndex;
    for (int i = 0; i < 10; i++)
    {
        //cout << "Total number of days: " << totalDays << endl;
        //cout << "Number of days of month[i]: " << month[i] << endl;
        totalDays += month[i]; 
        if (totalDays > 256) 
        {
            totalDays -= month[i];
            monthIndex = i;
            i = 20;
        }
    }
    string date = to_string(256-totalDays) + ".0" + to_string(monthIndex+1) + "." + to_string(year);
    //cout << "Total days in February: " << month[1] << endl;
    return date;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

