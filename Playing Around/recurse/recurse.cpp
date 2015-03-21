#include <iostream>
#include <string>

bool answerCheck(std::string input)
{
	return input == "Earth";
}

int main()
{
	while (true)
	{
		std::string userInput;

		std::cout << "What is bigger, the Moon, or the Earth?: ";
		std::cin >> userInput;

		if (userInput == "exit")
		{
			break;
		}

		if (answerCheck(userInput))
		{
			std::cout << "Correct!" << std::endl;
		}
		else
		{
			std::cout << "Incorrect!" << std::endl;
		}
	}

	system("pause");
	return 0;
}

/*
Awful Alternative Code:

void userInput(char* checkInput);

int main()
{
bool correctInput = false;
char input[80];
userInput(input);
correctInput = braceCheck(input);
if(correctInput == true){
cout<<"CORRECT!"<<endl;
main();
}
else{
cout<<"INCORRECT!"<<endl;
main();
}

}//end main
void userInput(char* checkInput)
{
cout<<"Input Anything: ";
cin>>checkInput;
if((checkInput[0]=='e')&&(checkInput[1]=='x')&&(checkInput[2]=='i')&&(checkInput[3]=='t')){
exit (0); //terminates the program
}//end if
}//end userInput function

//........ 
*/