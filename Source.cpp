// designers network
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

void die();

int main()
{
	string username;
	string password;
	bool success;
	cout << "\t Game Designer's Network \n";
	do
	{
		cout << "\n Username: ";
		cin >> username;

		cout << "Password: ";
		cin >> password;

		if (username == "S.Meier" && password == "civilization")
		{
			cout << "\n Hey, Sid";
			success = true;
		}
		else if (username == "S.Miyamoto" && password == "maribros")
		{
			cout << "\n What's up, Shigeru?";
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "\n How goes it, Will?";
			success = true;
		}
		else if (username == "guest" && password == "guest")
		{
			cout << "\n Welcome, guest.";
			success = true;
		}
	} while (!success);
	return 0;
}

//die roller
void roller(int)
{
	//seed gen
	srand(static_cast<unsigned int>(time(0)));
	//random generate
	int randomNumber = rand();
	//spawn a number between 1-6
	int die = (randomNumber % 6) + 1;
	cout << "This is the random spawner" << die << endl;
}

