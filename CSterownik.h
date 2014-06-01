#ifndef CSTEROWNIK_H
#define CSTEROWNIK_H

#include "CCzujnikPredkosciJazdy.h"
#include "CZmianaBiegow.h"
#include "CRegulatorPrzepustnicy.h"
#include "CTempomat.h"

class CSterownik
{
private:
	CCzujnikPredkosciJazdy *cz_;
	CZmianaBiegow zb_;
	CRegulatorPrzepustnicy rp_;
	CTempomat t_;
public:
	CSterownik(CCzujnikPredkosciJazdy *cz, CZmianaBiegow zb, CRegulatorPrzepustnicy rp, CTempomat t);
  ~CSterownik();

  void zwieksz_predkosc();
  void zmniejsz_predkosc();
};

#endif
