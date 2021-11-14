#include <iostream>

#include <string>

#include <fstream>

int main(int argc, char* argv[])

{

	// The executable name and at least one argument?

	if (argc < 2)

	{

		std::cout << "Error with input agrs.." << std::endl;

		return 1;

	}

	// For debugging purposes only

	for (int i = 0; i < argc; i++)

	{

		std::cout << i << ":" << argv[i] << std::endl;

	}

	std::ifstream inFile;

	inFile.open(argv[1]);

	if (!inFile)

	{

		std::cout << "Error with file name.." << std::endl; //if file name is not in command line show error

		return 1;

	}

	std::cout << "********************************************************" << std::endl;

	std::cout << "**********Welcome to my Letter Count Program************" << std::endl;

	std::cout << "********************************************************" << std::endl << std::endl;

	std::cout << "Analyzing file '" << argv[1] << "'..." << std::endl << std::endl; // Opening file to count vowels

	char ch;

	int v[8] = { 0 }; // this is count of vowels in a file initialized to 0

	while (inFile) {

		inFile.get(ch); //this function counts the vowels
		
		if (ch == 'A' || ch == 'a')v[0]++;

		if (ch == 'E' || ch == 'e')v[1]++;

		if (ch == 'I' || ch == 'i')v[2]++;

		if (ch == 'O' || ch == 'o')v[3]++;

		if (ch == 'U' || ch == 'u')v[4]++;

		if (ch == 'L' || ch == 'l')v[5]++;

		if (ch == 'S' || ch == 's')v[6]++;

		if (ch == 'C' || ch == 'c')v[7]++;
	}

	int sum = v[0] + v[1] + v[2] + v[3] + v[4] + v[5] + v[6] + v[7]; // calling function to add number of vowels from main function

	std::cout << "The number of A's: ..............................." << v[0] << std::endl;

	std::cout << "The number of E's: ..............................." << v[1] << std::endl;

	std::cout << "The number of I's: ..............................." << v[2] << std::endl;

	std::cout << "The number of O's: ..............................." << v[3] << std::endl;

	std::cout << "The number of U's: ..............................." << v[4] << std::endl;

	std::cout << "The number of L's: ..............................." << v[5] << std::endl;

	std::cout << "The number of S's: ..............................." << v[6] << std::endl;

	std::cout << "The number of C's: ..............................." << v[7] << std::endl;

	std::cout << "The vowel count is: .............................." << sum << std::endl;

	inFile.close();

	return 0;

}