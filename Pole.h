#pragma once
#include "Citac.h"
class Pole
{
private:
	Citac *c;
	int *poleInteger;
public:
	Pole(const char *menoSubora);
	~Pole();
	void pridajPrvky(const char *menoSuboru);
	void lowest();
	Pole(const Pole &zdroj);
	Pole &operator =(const Pole &zdroj);
};

