#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
	string players[10];
	int cups[10][5] = { 0 };
	for (int r = 0; r < 10; r++)
	{
		cout << "Enter Player # " << (r + 1) << ": ";
		getline(cin, players[r]);
		for (int c = 0; c < 4; c++)
		{
			cout << "Player # " << r + 1 << " Cups # " << c + 1 << " ==> ";
			cin >> cups[r][c];
			cups[r][4] += cups[r][c];
		}
		cin.ignore();
		cout << endl;
	}

	for (int r = 0; r < 10; r++)
	{
		cout << setw(12) << players[r] << "\t";
		for (int c = 0; c < 5; c++)
		{
			cout << cups[r][c] << "\t";
		}
		cout << endl;
	}
}