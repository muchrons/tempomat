#include "CPredkosc.h"


CPredkosc::CPredkosc(CRegulatorPrzepustnicy *rp, CZmianaBiegow *zb):
	rp_(rp),
	zb_(zb)
{
}

CPredkosc::~CPredkosc(void)
{
}

int CPredkosc::oblicz_predkosc()
{
	int bieg = zb_->jaki_bieg();
	int kat = rp_->kat_przepustnicy();
	return 0;
}
