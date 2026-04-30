#include <iostream>
#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
#include "../includes/Brain.hpp"

int main()
{
    std::cout << "Init Animals Cat and Dogs : " << std::endl;

    Animal* myAnimals[10];

    for (int i = 0; i < 10; i++)
    {
        if (i < 5)
            myAnimals[i] = new Dog();
        else
            myAnimals[i] = new Cat();
    }
    std::cout << std::endl << "Delete Animals Cat and Dogs : " << std::endl;

    for (int i = 0; i < 10; i++)
    {
        delete myAnimals[i];
    }

    std::cout << std::endl << "Deap Copy Test : " << std::endl;

    Dog* originalDog = new Dog();
    Dog* copyDog = new Dog(*originalDog);

    delete originalDog;

    copyDog->makeSound();
    delete copyDog; // Ne doit pas crasher (pas de double free)

    std::cout << std::endl << "operator '=' test : " << std::endl;
    Cat cat1;
    Cat cat2;
    std::cout << "Cat 1 in Cat 2 : " << std::endl;
    cat2 = cat1;

    std::cout << std::endl <<  "Wrong Animals Tests" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    wrongCat->makeSound();

    delete wrongMeta;
    delete wrongCat;

    return 0;
}