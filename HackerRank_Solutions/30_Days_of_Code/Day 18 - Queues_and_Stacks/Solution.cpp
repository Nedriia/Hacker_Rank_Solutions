#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
	//Write your code here
public:
	void pushCharacter(char &s)
	{
		pile.push(s);
	}
	void enqueueCharacter(char &s)
	{
		file.push(s);
	}

	char popCharacter()
	{
		return pile.top();
		pile.pop();
	}

	char dequeueCharacter()
	{
		return file.front();
		file.pop();
	}

private:
	queue<char> file;
	stack<char> pile;
};

int main() {