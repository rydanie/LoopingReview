//written by Ryley Danielson

#include <iostream>
#include <iomanip>
#include<string>

using namespace std;

int main()
{
	char choice = 'N';
	int numberLoops = 0, counter = 0;

	do {
		system("cls");   //Clear the Screen
		cout << "Enter Number of loops: ";
		// Get and validate the number of loops
		while (!(cin >> numberLoops) || (numberLoops < 1 || numberLoops > 10))
		{
			cout << "Number of Loops not between 1 and 10; ";
			cin.clear(); //Clear the buffer
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		//For Loop
		cout << "For Loop :\n";
		for (counter = 1; counter <= numberLoops; counter++)
			cout << "Loop " << counter << endl;

		//While Loop
		cout << "While Loop :\n";
		counter = 1;
		while (counter <= numberLoops)
		{
			cout << "Loop " << counter << endl;
			counter++;
		}

		//Do Loop
		cout << "Do Loop :\n";
		counter = 1;
		do
		{
			cout << "Loop " << counter << endl;
			counter++;
		} while (counter <= numberLoops);

		//Ask to Continue Program
		cout << "\nDo you want to continue Y/N?";
		cin >> choice;
	} while (toupper(choice) == 'Y');
	//END CONTINUE LOOP

	//End Program
	return 0;
}
