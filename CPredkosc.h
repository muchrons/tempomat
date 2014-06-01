#pragma once

#include "CRegulatorPrzepustnicy.h"
#include "CZmianaBiegow.h"

class CPredkosc
{

private:
	CRegulatorPrzepustnicy *rp_;
	CZmianaBiegow *zb_;

public:
	CPredkosc(CRegulatorPrzepustnicy *rp, CZmianaBiegow *zb);
	~CPredkosc(void);
	int oblicz_predkosc();

};

