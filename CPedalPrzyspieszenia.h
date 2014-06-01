#ifndef CPEDALPRZYSPIESZENIA_H
#define CPEDALPRZYSPIESZENIA_H

#include "CSterownik.h"

class CPedalPrzyspieszenia
{
private:
	CSterownik *cs_;
public:
  CPedalPrzyspieszenia(CSterownik *cs);
  ~CPedalPrzyspieszenia();

  void przyspiesz();
};

#endif
