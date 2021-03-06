// Modify the Scores class so that a single player can only
// score at most [maxEnt/2].

#include <iostream>

class RuntimeException
{
	public:
		RuntimeException(const string& err) { errorMsg = err; }
		string getMessage() const { return errorMsg; }
	private:
		string errorMsg;
};

class GameEntry
{
	public:
		GameEntry(const string& n ="", int s = 0);
		string getName() const;
		int getScore() const;

	private:
		string name;
		int score;
};

GameEntry::GameEntry(const string& n ="", int s = 0)
: name(n), score(s) { }

GameEntry::getName() const { return name; }

GameEntry::getScore() const { return score; }

class Scores
{
	public:
		Scores(int maxEnt = 10);
		~Scores();
		void add(const GameEntry& e);
		GameEntry remove(int i) throw(IndexOutOfBounds);
	private:
		int maxEntries;
		int numEntries;
		GameEntry* entries;
};

Scores::Scores(int maxEnt)
{
	maxEntries = maxEnt/2;
	entries = new GameEntry[maxEntries];
	numEntries = 0;
}

Scores::~Scores()
{
	delete[] entries;
}

void Scores::add(const GameEntry& e)
{
	int newScore = e.getScore();
	if (numEntires == maxEntries)
	{
		if (newScore <= entries[maxEntries-1].getScore())
			return;
	}
	else numEntries++;

	int i = numEntries-1;
	while ( i >= 0 && newScore > entries[i].getScore())
	{
		entries[i+1] = entries[i];
		i--;
	}
	entires[i+1] = e;
}
