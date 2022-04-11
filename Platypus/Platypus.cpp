
#include <iostream> 
#include "Platypus.h"
using namespace std;

//implementations of consturctor1
Platypus::Platypus(float _weight, short _age, char _name, char _gender)
{
    weight = _weight;
    age = _age;
    name = _name;
    gender = _gender;
    mutant = false;
    alive = true;
}
//implementation of conctruqtor2
Platypus::Platypus()
{
    weight = 0;
    alive = 0;
    age = 0;
    name = ' ';
    cout << "platypus created" << endl;
}
//implementation of getter funqtions
float Platypus::getWeight()const
{
    return weight;
}

short Platypus::getAge()const
{
    return age;
}

char Platypus::getName()const
{
    return name;
}

char Platypus::getGender()const
{
    return gender;
}

//age_me funqtion
void Platypus::age_me()
{
    if (alive == true) 
    {
        age++;
        int a = rand() % 100 + 1;
        if (a >= 2)mutant = 1;
        cout << "platypus has mutated" << endl;
        double chance;
        chance = 10 * weight;
        int b = rand() % 100 + 1;
        if (b <= chance) alive = 0;
    }
}
//print function 
void Platypus::print()const
{
    cout << "Name:  " << name << endl;
    cout << "Gender:  " << gender << endl;
    cout << "Age:  " << age << " months" << endl;
    cout << "Weight:  " << weight << " kg" << endl;
    if (alive == 1) cout << "alive" << endl;
    else cout << "dead" << endl;
    if (mutant == 1) cout << "platypus is mutant" << endl;
    else cout << "platypus isn't a mutant" << endl;

}

//fight function
void Platypus::fight(Platypus& k)
{
    if (alive == true && k.alive == true) //both of them must be alive
        cout << "Platypuses started fight" << endl;
    {
        double fight_ratio = (weight / k.weight) * 50;
        double r = rand() % 100 + 1;
        if (r < fight_ratio) {
            k.alive = 0;
            cout << "the 2nd platypus was defeated" << endl;// 2nd plu will die if his ration is lower
        }
        else {
            alive = 1;
            cout << "the 2nd pltypus has won " << endl;

        }

    }
}

//eaet funqcia
void Platypus::eat()
{
    if (alive == 1) 
    {
        default_random_engine dre(random_device{}()); //random eathing method
        uniform_real_distribution <float> urd(0.1, 5);
        double food = (weight * urd(dre)) / 100;
        weight = weight + food;
    }
}

//hatch funqcia
void Platypus::hatch()
{

    alive = true;
    mutant = false;
    age = 0;
    if (rand() % 2 == 1) gender = 'F';
    else gender = 'm';
    default_random_engine dre(random_device{}());
    uniform_real_distribution <float> urd(0.1, 1);
    weight = urd(dre);
    default_random_engine dre1(random_device{}()); // random names generator
    uniform_int_distribution <int> urd1(1, 26);
    name = 'A' + urd1(dre1);
    cout << "" << endl;
}
