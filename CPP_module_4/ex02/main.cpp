#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	//const Animal* animal = new Animal(); //this is an error because Animal is abstract
	// Exercice example
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();

	std::cout << std::endl;

	delete dog;
	delete cat;
	std::cout << std::endl;
	std::cout << std::endl;

	const Dog* c_dog = new Dog();
	const Cat* c_cat = new Cat();

	std::cout << std::endl;
	std::cout << "-------DOG IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << c_dog->getBrain()->getIdeas()[i] << std::endl;
	}
	std::cout << "-------CAT IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << c_cat->getBrain()->getIdeas()[i] << std::endl;
	}
	delete c_dog;
	delete c_cat;
	std::cout << std::endl;
	std::cout << std::endl;

	Dog medor;
	Cat fifi;

	Dog & medor_ref = medor;
	Cat & fifi_ref = fifi;

	std::cout << std::endl << "creating copies" << std::endl;
	Dog medor_copy(medor_ref);
	Cat fifi_copy(fifi_ref);

	std::cout << std::endl;
	std::cout << "-------DOG COPY IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << medor_copy.getBrain()->getIdeas()[i] << std::endl;
	}
	std::cout << "-------CAT COPY IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << fifi_copy.getBrain()->getIdeas()[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;


	std::cout << std::endl;
	std::cout << std::endl;

	Dog medor_assignation;
	Cat fifi_assignation;

	std::cout << std::endl;
	std::cout << "assigning values to medor and fifi" << std::endl;
	medor_assignation = medor;
	fifi_assignation = fifi;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << "-------DOG ASSIGNATION IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << medor_assignation.getBrain()->getIdeas()[i] << std::endl;
	}
	std::cout << "-------CAT ASSIGNATION IDEAS-------" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		if (i % 25 == 0)
			std::cout << i << ": " << fifi_assignation.getBrain()->getIdeas()[i] << std::endl;
	}
	std::cout << std::endl;
	std::cout << std::endl;

	// Array of animals
	const Animal	*(animal_array[4]);
	std::cout << std::endl;
	// Half filled with dogs
	for (int i = 0; i < 2; i++)
		animal_array[i] = new Dog();
	std::cout << std::endl;

	// Half filled with cats
	for (int i = 2; i < 4; i++)
		animal_array[i] = new Cat();
	std::cout << std::endl;

	for (int i = 0; i < 4; i++)
		delete animal_array[i];
	std::cout << std::endl;

}