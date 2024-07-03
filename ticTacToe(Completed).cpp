//This is supposed to make a playable tic tac toe game to the console
//lets give it a shot
#include <iostream>
#include <string>
using namespace std;


int main()
{
	//spaces, i'm sorry, I tried to do it the right way but I couldnt replace it with mark.
	char space1='1';
	char space2 = '2';
	char space3 = '3';
	char space4 = '4';
	char space5 = '5';
	char space6 = '6';
	char space7 = '7';
	char space8 = '8';
	char space9 = '9';
	int spaceChoice;  //for user selecting thier space
	char mark='X';        //for replacing space number with player mark (X) or (O)
	//set up the starter screen

	for (int playerMove = 0;playerMove <= 9;playerMove++)
	{
		cout << "\t\twelcome to tic tac toe\t\t\n";
		cout << "\t\t-------------------------\t\t\n";
		for (int i = 0; i <= 11;i++)
		{
			// setting up the space numbering
			if (i == 1)
			{
				cout << "\t\t-   " << space1;

				cout << "   -   " << space2;
				cout << "   -   " << space3 << "   -   " << endl;
			}
			else if (i == 5)
			{
				cout << "\t\t-   " << space4;
				cout << "   -   " << space5;
				cout << "   -   " << space6 << "   -   " << endl;
			}
			else if (i == 9)
			{
				cout << "\t\t-   " << space7;
				cout << "   -   " << space8;
				cout << "   -   " << space9 << "   -   " << endl;
			}
			else if (i == 3 || i == 7 || i == 11)
			{
				cout << "\t\t--------------------------\t\t\n";
			}
			else
			{
				cout << "\t\t-\t-\t-\t- \n";
			}

		}

			//player turn, selecting a space
			if (playerMove % 2 == 0)
			{
				mark = 'X';
				cout << "Player 1 (X), please select a space: ";
				cin >> spaceChoice;
				switch (spaceChoice)
				{
				case 1:
					space1 = mark;
					break;
				case 2:
					space2 = mark;
					break;
				case 3:
					space3 = mark;
					break;
				case 4:
					space4 = mark;
					break;
				case 5:
					space5 = mark;
					break;
				case 6:
					space6 = mark;
					break;
				case 7:
					space7 = mark;
					break;
				case 8:
					space8 = mark;
					break;
				case 9:
					space9 = mark;
					break;
				}

			}


			else
			{
				mark = 'O';
				cout << "Player 2 (O), please select a space: ";
				cin >> spaceChoice;
				switch (spaceChoice)
				{
				case 1:
					space1 = mark;
					break;
				case 2:
					space2 = mark;
					break;
				case 3:
					space3 = mark;
					break;
				case 4:
					space4 = mark;
					break;
				case 5:
					space5 = mark;
					break;
				case 6:
					space6 = mark;
					break;
				case 7:
					space7 = mark;
					break;
				case 8:
					space8 = mark;
					break;
				case 9:
					space9 = mark;
					break;
				}

			}


		


	}
}