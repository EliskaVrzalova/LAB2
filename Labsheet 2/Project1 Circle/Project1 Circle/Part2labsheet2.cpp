// Name: eliska vrzalova
// Login: c00301768
// Date: 02/10/2023
// Approximate time taken: 15 min (start 09:14)
// actual time take: 25 min (end 9:39)
//---------------------------------------------------------------------------
// Program: The ratio problem
// ---------------------------------------------------------------------------
// Known Bugs: No validation on user input
// None

#include <iostream>

int main1()
{
	//variables
	float nicksRatio = 0; // nick hard disk ratio
	float alfsRatio = 0; // alfs hard disk ratio
	float totalSize = 0; // total hard disk size, user will input
	float nicksSize = 0; // the size of Nics hard disk
	float alfSize = 0; // the size of Alfs hard disk
	float onePiece = 0; // 1 piece of the total ratio number

	// ask user for input
	std::cout << "Wat is the total hard disk size?";
	std::cin >> totalSize;
	std::cout << "What is Nick's hard disk ratio?";
	std::cin >> nicksRatio;
	std::cout << "What is Alf's hard disk ratio?";
	std::cin >> alfsRatio;
	 //calculations
	onePiece = totalSize / (nicksRatio + alfsRatio); // calculates the 1 piece of total ratio number
	nicksSize = onePiece * nicksRatio; // calculates the size of nicks hard disk
	alfSize = onePiece * alfsRatio; // calculates the size of alfs hard disk
	//answer
	std::cout << "Nick's hard disk size is " << nicksSize << " and Alf's hard disk size is " << alfSize << std::endl;
	system("Pause");
	return 0;


}
