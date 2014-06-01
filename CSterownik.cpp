#include "CSterownik.h"


CSterownik::CSterownik(CCzujnikPredkosciJazdy *cz, CZmianaBiegow zb, CRegulatorPrzepustnicy rp, CTempomat t):
	cz_(cz),
	zb_(zb),
	rp_(rp),
	t_(t)
{
}

CSterownik::~CSterownik()
{
}

void CSterownik::zwieksz_predkosc()
{
	int predkosc = cz_ -> zmierz_predkosc() ;
	if(predkosc == 0)
	{
		zb_.dostosuj_bieg(predkosc);
	}
	else
	{
		if(!rp_.otworz_przepustnice())
		{
			zb_.wlacz_wyzszy_bieg();
			rp_.ustaw_kat_poczatkowy();
		}
	}
}

void CSterownik::zmniejsz_predkosc()
{
	if(t_.jest_wlaczony())
	{
		if(t_.predkosc_zadana() == cz_->zmierz_predkosc())
		{
			t_.wylacz();
			zmniejsz_predkosc();
			return;
		}
		do
		{
			zmniejsz_predkosc();
		}while(t_.predkosc_zadana() < cz_->zmierz_predkosc());
	}
	else
	{
		if(!rp_.zamknij_przepustnice())
		{
			zb_.wlacz_nizszy_bieg();
			rp_.ustaw_kat_poczatkowy();
		}
	}
}
