#ifndef CTEMPOMAT_H
#define CTEMPOMAT_H

#include "CCzujnikPredkosciJazdy.h"

class CTempomat
{

public:
  CTempomat(CCzujnikPredkosciJazdy *cz);
  ~CTempomat();
  void uruchom();
  void wylacz();
  bool jest_wlaczony();
  int predkosc_zadana();

private:
  CCzujnikPredkosciJazdy *cz_;
  int predkosc_zadana_;
  bool wlaczony_;
};

#endif
