#include <iostream>
#include <vector>

using namespace std;

vector<int> chainLightning(vector<int> minionHealth, int D, int K)
{

	int damageTemp = D;
	
	vector<int> returnIndeces;
	int index = 0;

	while (damageTemp > 0)
	{
		int tempSmallest = abs(minionHealth[0] - D);
		for (int i = 0; i < static_cast<int>(minionHealth.size())-1; i++)
		{
			if (abs(minionHealth[i]-D)<tempSmallest)
			{
				tempSmallest = abs(minionHealth[i]-D);
				returnIndeces[index] = minionHealth[i];
			}
		}
		index += 1;
		D -= K;
		
	}

	return returnIndeces;
	
		
}

int main()
{
	vector <int> testVec{35, 100, 60, 90};
	vector<int> results = chainLightning(testVec, 100, 35);
	
	cout << "Indices of hit minions: ";
	for (vector<int>::const iterator i = path.begin(); i != path.end(); i++)
	{
		cout << *i << ' ';
	}
	return 0;
}
