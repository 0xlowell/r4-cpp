//
// Created by Lowell Zima on 1/4/23.
//
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	{
		const Dog *dog = new Dog();
		const Cat *cat = new Cat();

		delete dog;
		delete cat;
	}
	std::cout << std::endl << "---------------------------" << std::endl;
	{
		const Animal* animal[10];

		for (int i = 0; i < 10; i++)
			if (i < (10/2))
			{
				std::cout << i << " 😸" << std::endl;
				animal[i] = new Cat();
			}
			else {
				std::cout << i << " 🐶" << std::endl;
				animal[i] = new Dog();
			}
		for (int i = 0; i < 10; i++)
			delete animal[i];
	}
//	{
//		std::cout << "BASIC tests: " << std::endl;
//		const Animal* meta = new Animal();
//		const Animal* dog = new Dog();
//		const Animal* cat = new Cat();
//
//		std::cout << std::endl;
//
//		std::cout << "🐶 : " << dog->getType() << " " << std::endl;
//		std::cout << "😸 : " << cat->getType() << " " << std::endl;
//
//		std::cout << std::endl;
//
//		std::cout << "What the Cat say:" << std::endl;
//		cat->makeSound();
//
//		std::cout << "What the Dog say:" << std::endl;
//		dog->makeSound();
//
//		std::cout << "Animal: no sound" << std::endl;
//		meta->makeSound();
//		std::cout << std::endl << std::endl;
//
//		delete meta;
//		delete dog;
//		delete cat;
//	}
}
