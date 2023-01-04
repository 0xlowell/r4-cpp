//
// Created by Lowell Zima on 1/4/23.
//
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "RIGHT type test: " << std::endl;
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << std::endl;

		std::cout << "🐶 : " << dog->getType() << " " << std::endl;
		std::cout << "😸 : " << cat->getType() << " " << std::endl;

		std::cout << std::endl;

		std::cout << "What the Cat say:" << std::endl;
		cat->makeSound();

		std::cout << "What the Dog say:" << std::endl;
		dog->makeSound();

		std::cout << "Animal: no sound" << std::endl;
		meta->makeSound();
		std::cout << std::endl << std::endl;

		delete meta;
		delete dog;
		delete cat;
	}
	std::cout << "---------------------------" << std::endl;
	{
		std::cout << "WRONG type test: " << std::endl;

		const WrongAnimal* meta = new WrongAnimal();
		const Animal* dog = new Dog();
		const WrongAnimal* cat = new WrongCat();

		std::cout << std::endl;

		std::cout << "🐶 : " << dog->getType() << " " << std::endl;
		std::cout << "😸 : " << cat->getType() << " " << std::endl;

		std::cout << std::endl;

		std::cout << "What the Dog say:" << std::endl;
		dog->makeSound();

		std::cout << "What the WrongCat say:" << std::endl;
		cat->makeSound();

		std::cout << "What the WrongAnimal say: " << std::endl;
		meta->makeSound();

		std::cout << std::endl << std::endl;

		delete meta;
		delete dog;
		delete cat;
	}
}
