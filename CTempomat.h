#ifndef CTEMPOMAT_H
#define CTEMPOMAT_H

class CTempomat
{

public:
  CTempomat();
  ~CTempomat();
  void uruchom();
  void wylacz();

private:
  int predkosc_zadana_;
  int predkosc_min_;
  int predkosc_max_;

};

#endif
