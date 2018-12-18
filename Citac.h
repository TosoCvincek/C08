#pragma once
class Citac
{
private:
	int dlzka;
public:
	Citac(const char *menoSuboru);
	~Citac();
	int getDlzka();
	void Citaj(const char *menoSuboru, int *poleInteger);
};

