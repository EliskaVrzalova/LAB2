// Name: eliska vrzalova
// Login: c00301768
// Date: 27/09/2023
// Approximate time taken: 10 min
// actual time take: 15 min
//---------------------------------------------------------------------------
// Program: hard disk sizes
// ---------------------------------------------------------------------------
// Known Bugs: No validation on user input
// None

#include <iostream>

int main()
{
	//variables
	int NickHD = 0; //size of Nicks hard disk
	int AlfHD = 0; //size of Alfs hard disk
	int TotalHD = 0; //total hard disk size

	//ask user for input
	std::cout << "What is the total hard disk size? ";
	std::cin >> TotalHD;
	AlfHD = (TotalHD / 3); //calculates the size of Alfs hard disk 
	NickHD = (AlfHD * 2); //calculates the size of Nick hard disk

	//display answer
	std::cout << " The size of Nick's hard disk is " << NickHD << " and the size of Alf's hard disk is " << AlfHD << std::endl;
	system("Pause");
	return 0;

}