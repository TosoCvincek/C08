#include "Citac.h"
#include <cstring>
#include <cstdio>
#include <stdlib.h>
Citac::Citac(const char * menoSuboru)
{
	dlzka = 0;
	if (menoSuboru) {
		FILE *f = fopen(menoSuboru, "rb");
		if (f)
		{
			//const char *k = (const char)fgetc(f);
			//dlzka = fread(nullptr, 1, 1, f);
			//dlzka = atoi(k);
			fscanf(f, "%d", &dlzka);
		}
		fclose(f);
	}
}
int Citac::getDlzka() {
	return dlzka;
}

void Citac::Citaj(const char * menoSuboru,int *poleInteger)
{
	if (menoSuboru) {
		FILE *f = fopen(menoSuboru, "rb");
		if (f)
		{	
			int cislo;
			//const char *k = (const char)fgetc(f);
			//dlzka = fread(nullptr, 1, 1, f);
			//dlzka = atoi(k);
			fscanf(f, "%d", &cislo);
			for (int i = 0; i < getDlzka(); i++) {
				fscanf(f, "%d \n", &cislo);
				poleInteger[i] = cislo;
				//printf("\n%d", poleInteger[i]);
			}
			fclose(f);
		}
		
	}
}

Citac::~Citac()
{
}
