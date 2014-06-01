#include "CPedalPrzyspieszenia.h"

CPedalPrzyspieszenia::CPedalPrzyspieszenia(CSterownik *cs):
	cs_(cs)
{
}

CPedalPrzyspieszenia::~CPedalPrzyspieszenia()
{
}

void CPedalPrzyspieszenia::przyspiesz()
{
	cs_->zwieksz_predkosc();
}
