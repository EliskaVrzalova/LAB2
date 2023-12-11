// Name: eliska vrzalova
// Login: c00301768
// Date: 02/10/2023
// Approximate time taken: 20 min (start 09:57)
// actual time take: 43 min (end 10:41)
//---------------------------------------------------------------------------
// Program: The elevator problem
// ---------------------------------------------------------------------------
// Known Bugs: No validation on user iput
// None

#include <iostream>

int main2()
{
	//variables
	int children = 0;
	int adults = 0; 
	float percentChild = 0; //how much space in the elevator is occupied by 1 child (in %)
	float percentAdult = 0; //how much space in the elevator is occupied by 1 adult (in %)
	float space = 0; //space remaining for adults after children get in

	//ask user for input
	std::cout << "How many children are getting in the elevator?";
	std::cin >> children;

	//calcultions
	percentChild = (100.0f / 20.0f); // 100% of the elevator space, max. of 20 children, calculates how much of a space occupies 1 child (in %)
	percentAdult = (100.0f / 15.0f); // 100% of the elevator space, max. of 15 adults, calculates how much of a space occupies 1 adult (in %)
	space = 100 - (children * percentChild); // calculates how much space in % children occupy and substracts it from 100 (%) to get remaining space for adults
	adults = floor(space / percentAdult); //calculates how many adults can still fit in the elevator

	//answer
	std::cout << "The number of adults who can still fit in this elevator is " << adults << std::endl;
	system("Pause");
	return 0;
}