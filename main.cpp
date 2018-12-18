#include "Citac.h"
#include <stdio.h>
#include "Pole.h"

int main(int args, char *argv[]) {
	const char *menoSuboru =  argv[1];
	Pole p(menoSuboru);
	p.pridajPrvky(menoSuboru);
	p.lowest();
	Pole p1(p);
	p1.lowest();
	
}