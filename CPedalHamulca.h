#ifndef CPEDALHAMULCA_H
#define CPEDALHAMULCA_H

#include "CSterownik.h"

class CPedalHamulca
{
private:
	CSterownik *cs_;
public:
  CPedalHamulca(CSterownik *cs);
  ~CPedalHamulca();

  void hamuj();
};

#endif
