/*********************************************************************
** Program name: Zoo Tycoon
** Author: Devin Gendron
** Date: 2/4/17
** Description: Zoo Tycoon Game
*********************************************************************/
#include <iostream>
#include <string>
#include <sstream>
#include "promptPlayer.hpp"
#include "inputValidation.hpp"
#include <random>
#include <cmath>
#include <map>
#include <iomanip>

int feedChoice()
{
	int feed = 0;
	int exitCount = 0;

	//menu
	//std::cout << "--Zoo Tycoon--" << std::endl;
	//std::cout << "Please enter the type of animal feed." << std::endl;

	do
	{
		exitCount = 0;			//sets to continue while loop in do-while
		while (exitCount == 0)
		{
			int correctEntry = 0;
			int incorrectEntry = 0;
			std::string str = " ";
			int inputLength = str.size();

			//arrays to check string	
			char numEntry[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
			
			char letterEntry[] =
			{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
			
			char symEntry[] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')',
			'{', '}', '[', ']', '"', '<', '>', ',', '.', '?', '/', ' ', '-', '_', '+', '='};
			//removed: '\', '|', ';', ':', ''',

			//reads in user input
			getline(std::cin, str);
			std::stringstream ss(str);

			//checks for empty strings
			bool badEntry = false;
			if (str.empty())
			{
				badEntry = true;
			}

			//checks for proper ints or incorrect entries
			for (int t = 0; t < str.size(); t++)
			{
				for (int m = 0; m < 10; m++)
				{
					if (str[t] == numEntry[m])
					{							
						correctEntry ++;
					}
				}
				for (int y = 0; y < 52; y++)
				{
					if (str[t] == letterEntry[y])
					{										
						incorrectEntry ++;
					}
				}
				for (int n = 0; n < 28; n++)
				{
					if (str[t] == symEntry[n])
					{
						incorrectEntry ++;
					}
				}
			}
			if (badEntry == true)
			{
				std::cout << "Please enter at least one integer." << std::endl;
				exitCount = 0;
			}
			else if (correctEntry == str.size())
			{
				ss >> feed;
				//std::cout << "Correct Input." << std::endl;
				exitCount++;
			}
			else if (incorrectEntry > 0)
			{
				std::cout << "Incorrect Entry." << std::endl;
				std::cout << "Please enter an integer: No characters, symbols, doubles, floats, or decimals." << std::endl;
				exitCount = 0;
			}
		}

		if (feed >= 1 && feed <= 3)
		{
			exitCount = 0;
		}
		else
		{
			exitCount = 1;
			std::cout << "Please use proper range." << std::endl;
		}

	} while(exitCount == 1);

	return feed;
}

int animalChoice()
{
	int choice = 0;
	int exitCount = 0;

	do
	{
		exitCount = 0;			//sets to continue while loop in do-while
		while (exitCount == 0)
		{
			int correctEntry = 0;
			int incorrectEntry = 0;
			std::string str = " ";
			int inputLength = str.size();

			//arrays to check string	
			char numEntry[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
			
			char letterEntry[] =
			{'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
			'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
			
			char symEntry[] = {'`', '~', '!', '@', '#', '$', '%', '^', '&', '*', '(', ')',
			'{', '}', '[', ']', '"', '<', '>', ',', '.', '?', '/', ' ', '-', '_', '+', '='};
			//removed: '\', '|', ';', ':', ''',

			//reads in user input
			getline(std::cin, str);
			std::stringstream ss(str);

			//checks for empty strings
			bool badEntry = false;
			if (str.empty())
			{
				badEntry = true;
			}

			//checks for proper ints or incorrect entries
			for (int t = 0; t < str.size(); t++)
			{
				for (int m = 0; m < 10; m++)
				{
					if (str[t] == numEntry[m])
					{							
						correctEntry ++;
					}
				}
				for (int y = 0; y < 52; y++)
				{
					if (str[t] == letterEntry[y])
					{										
						incorrectEntry ++;
					}
				}
				for (int n = 0; n < 28; n++)
				{
					if (str[t] == symEntry[n])
					{
						incorrectEntry ++;
					}
				}
			}
			if (badEntry == true)
			{
				std::cout << "Please enter at least one integer." << std::endl;
				exitCount = 0;
			}
			else if (correctEntry == str.size())
			{
				ss >> choice;
				//std::cout << "Correct Input." << std::endl;
				exitCount++;
			}
			else if (incorrectEntry > 0)
			{
				std::cout << "Incorrect Entry." << std::endl;
				std::cout << "Please enter an integer: No characters, symbols, doubles, floats, or decimals." << std::endl;
				exitCount = 0;
			}
		}

		if (choice >= 1 && choice <= 3)
		{
			exitCount = 0;
		}
		else
		{
			exitCount = 1;
			std::cout << "Please use proper range." << std::endl;
		}

	} while(exitCount == 1);

	return choice;
}