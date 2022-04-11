#include "platypus.h"
#include <iostream>
using namespace std;
int main()
{
	Platypus plu1(5.0, 3, 'k', 'm');
	Platypus plu2(4.7, 2.5, 'j', 'f');
	plu1.print();
	plu1.age_me();
	plu1.eat();
	plu2.print();
	plu2.age_me();
	plu2.eat();
	plu2.hatch();
	plu1.fight(plu2);
	

}
