#include "CPedalHamulca.h"

CPedalHamulca::CPedalHamulca(CSterownik *cs):
	cs_(cs)
{
}

CPedalHamulca::~CPedalHamulca()
{
}

void CPedalHamulca::hamuj()
{
	cs_->zmniejsz_predkosc();
}
