#include "CRegulatorPrzepustnicy.h"

CRegulatorPrzepustnicy::CRegulatorPrzepustnicy():
  kat_min_(10),
  kat_max_(90),
  kat_przepustnicy_(10)
{
}

CRegulatorPrzepustnicy::~CRegulatorPrzepustnicy()
{
}

void CRegulatorPrzepustnicy::ustaw_kat_poczatkowy()
{
	kat_przepustnicy_=10;
}

bool CRegulatorPrzepustnicy::otworz_przepustnice()
{
	if (kat_przepustnicy_==kat_max_)
	{
		return false;
	}
	kat_przepustnicy_+=10;
	return true;
}
 
bool CRegulatorPrzepustnicy::zamknij_przepustnice()
{
	if (kat_przepustnicy_==kat_min_)
	{
		return false;
	}
	kat_przepustnicy_-=10;
	return true;
}

int CRegulatorPrzepustnicy::kat_przepustnicy()
{
	return kat_przepustnicy_;
}
