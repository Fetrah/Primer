#include <iostream>

class Animal
{
public:
	virtual void eat()
	{
		std::cout << "I eat generic food" << std::endl;
	}
};

class Cat : public Animal
{
public:
	void eat()
	{
		std::cout << "I eat fish" << std::endl;
	}
};

void displayDiet(Animal someAnimal)
{
	someAnimal.eat();
}

int main()
{
	Animal animal;
	Cat cat;

	//animal.eat(); // outputs "I eat generic food"
	//cat.eat(); // outputs "I eat fish"

	displayDiet(animal); // with or without virtual outputs "I eat generic food"
	displayDiet(cat); // with virtual outputs "I eat fish", without virtual outputs "I eat generic food". 

	system("pause");
	return 0;
}