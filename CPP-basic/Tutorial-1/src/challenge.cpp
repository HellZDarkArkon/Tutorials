/// basic CPP Tutorial 1 -- Console Interaction Project///

#include <iostream>
#include <string.h>

int main()
{
	std::string strName1 = " ";
	std::string strName2 = " ";
	char cAns;
	bool bCorrect = false;

	while(!bCorrect)
	{
		std::cout << "What is your first name? "<<std::endl;
		std::cin>>strName1; std::cout<<std::endl;
		std::cout<<"What is your last name?"<<std::endl;
		std::cin>>strName2; std::cout<<std::endl;
		std::cout<<"I see, so your name is" + strName1+ " " + strName2+ ", right?" <<std::endl;
		std::cin >> cAns;

		if(cAns == 'Y' || cAns == 'y')
		{
			std::cout<<"Good to know, goodbye."<<std::endl;
			bCorrect == true;
		}
		else if (cAns == 'N' || cAns == 'n')
		{
			std::cout<<"Oh, in that case, please tell me what your name REALLY is."<<std::endl;
		}
		else
		{
			std::cout<<"ERROR: Acceptable values are only 'Y', 'y', 'N'or 'n'"<<std::endl;
		}
	}
}