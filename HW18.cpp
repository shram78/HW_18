#include <iostream>

class Animal
{
public:
	virtual void Voice()
	{
		std::cout << "Welcome to the zoo\n";
	}
};

class Dog : public Animal
{
	void Voice() override
	{
		std::cout << "Woof!\n";
	}
};

class Cat : public Animal
{
	void Voice() override
	{
		std::cout << "Meow!\n";
	}
};

class Cow : public Animal
{
	void Voice() override
	{
		std::cout << "Moo!\n";
	}
};

int main()
{
	Animal* animals[] = { {new Animal}, {new Dog}, {new Cat}, {new Cow} };

	for (Animal* animal : animals)
		animal->Voice();
}