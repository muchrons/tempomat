#ifndef CREGULATORPRZEPUSTNICY_H
#define CREGULATORPRZEPUSTNICY_H

class CRegulatorPrzepustnicy
{

private:
	int kat_min_;
	int kat_max_;
	int kat_przepustnicy_;
public:
  CRegulatorPrzepustnicy();
  ~CRegulatorPrzepustnicy();

  void ustaw_kat_poczatkowy();
  bool otworz_przepustnice();
  bool zamknij_przepustnice();
  int kat_przepustnicy();
};

#endif
