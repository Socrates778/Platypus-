#include <random>
#include <ctime>
#include <iostream>
using namespace std;
#pragma once
class Platypus
{
	float weight;
	short age;
	char name;
	char gender;
	bool alive;
	bool mutant;
public:
	//Default constructori
	Platypus();
	//parametrebiani constructori
	Platypus(float _weight, short _age, char _name, char _gender);
	//Required functions
	void print() const;
	float getWeight()const;
	short getAge()const;
	char getName()const;
	char getGender()const;
	void setWeight();
	void setAge();
	void setName();
	void setGender();
	void age_me();
	void fight(Platypus&);
	void eat();
	void hatch();

};

