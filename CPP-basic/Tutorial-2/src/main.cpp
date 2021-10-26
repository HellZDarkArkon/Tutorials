/// basic CPP Tutorial 2 -- Calculate an Average ///

#include <iostream>

int main()
{
	int iAverage[5];
	float fAnswer;

	std::cin >> iAverage[0]; std::cout << std::endl;
	std::cin >> iAverage[1]; std::cout << std::endl;
	std::cin >> iAverage[2]; std::cout << std::endl;
	std::cin >> iAverage[3]; std::cout << std::endl;
	std::cin >> iAverage[4]; std::cout << std::endl;

	fAnswer = (iAverage[0] + iAverage[1] + iAverage[2] + iAverage[3] + iAverage[4]) / 5;

	std::cout << std::endl;
	std::cout << "The average of the numbers " << iAverage[0] << ", " << iAverage[1] << ", " << iAverage[2] << ", " << iAverage[3] << " and " << iAverage[4] << " is " << fAnswer << std::endl;
	return 0;
}