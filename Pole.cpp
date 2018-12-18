#include "Pole.h"
#include <stdio.h>

Pole::Pole(const char *menoSuboru)
{
	c = new Citac(menoSuboru);
	poleInteger = new int[c->getDlzka()];
}


Pole::~Pole()
{
	delete[] c;
	delete[] poleInteger;

}

void Pole::pridajPrvky(const char * menoSuboru)
{
		c->Citaj(menoSuboru,poleInteger);
}

void Pole::lowest()
{
	int max = _CRT_INT_MAX;
	for (int i = 0; i < c->getDlzka(); i++)
	{
		if (poleInteger[i] < max) {
			max = poleInteger[i];
		}
	}
	printf("Najmensie cislo je %d", max);
}

Pole::Pole(const Pole & zdroj) //kopy konštruktor
{
	c = zdroj.c;
	poleInteger = new int[zdroj.c->getDlzka()];
	for (int i = 0; i < c->getDlzka(); i++)
	{
		poleInteger[i] = zdroj.poleInteger[i];
	}
}

Pole & Pole::operator=(const Pole & zdroj) // priraïovaci operator
{
	if (this == &zdroj) return *this;
	c = zdroj.c;
	poleInteger = new int[zdroj.c->getDlzka()];
	for (int i = 0; i < c->getDlzka(); i++)
	{
		poleInteger[i] = zdroj.poleInteger[i];
	}
	return *this;
}
