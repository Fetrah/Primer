#include <iostream>
#include <string>
#include <vector>
using namespace std;

// strings are a sequence of characters. The string can be considered as a RANGE of ELEMENTS, where the elements are the characters. Thus, we can use them in a for loop
void stringLoop()
{
	string userInput;

	cout << "Say something: ";
	cin >> userInput;

	// loop through string by using the iterate through range of elements for loop syntax (decleration : range) {statement}; 
	for (char index : userInput)
	{
		cout << "[" << index << "] ";
	}

	cout << endl;
}

void vectorLoop()
{
	vector<string> vectorOfStrings;
	string userInput;

	// while the user is inputting something into the input stream.  Use CTRL + Z to indicate you are inputting nothing
	cout << "Say something: ";
	while (cin >> userInput)
	{
		vectorOfStrings.push_back(userInput);
		cout << endl << "Say something else: ";
	}
}

int main()
{
	stringLoop();

	system("pause");
	return 0;
}