#ifndef CZMIANABIEGOW_H
#define CZMIANABIEGOW_H

class CZmianaBiegow
{

private:
	int aktualny_bieg_;
	int bieg_min_;
	int bieg_max_;

public:
  CZmianaBiegow();
  ~CZmianaBiegow();

  void dostosuj_bieg(int predkosc);
  void wlacz_wyzszy_bieg();
  void wlacz_nizszy_bieg();
  int jaki_bieg();
};

#endif
