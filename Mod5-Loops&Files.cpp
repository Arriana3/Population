//File name- Mod5-Loops&Files.cpp : 
//

#include <iostream>
using namespace std;
int main()
{
	double Start, increase, Days, size, Change;
	
	cout << "What is the starting number of organisims? " << endl;
	cin >> Start;
	cout << "At what rate are they incresing? (as a percent) \n";
	cin >> increase;
	cout << "How many days have past? \n";
	cin >> Days;
	while (Start < 2 || increase < 0 || Days < 1) 
	{
		"The starting number must be more then two.";
		"The inceasing rate of the organisim must be positve.";
		"At least 2 days must have gone by."
			"{please try again}";


	}
	while (Days =! Change)
	{
		double Change = 1;
		size = (Start * increase) * Change;
		cout << "On " << Change << " The population was " << size << ". \n";
		Change++;

	}
}