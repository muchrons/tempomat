#include "CZmianaBiegow.h"

CZmianaBiegow::CZmianaBiegow():
 aktualny_bieg_(0),
 bieg_min_(1),
 bieg_max_(6)
{
}

CZmianaBiegow::~CZmianaBiegow()
{
}
 void CZmianaBiegow::dostosuj_bieg(int predkosc)
 {
	 if(predkosc == 0)
	 {
		 aktualny_bieg_=1;
	 } else if (predkosc>0 && predkosc <30)
	 {
		 aktualny_bieg_=2;
	 }else if (predkosc>=30 && predkosc <50)
	 {
		 aktualny_bieg_=3;
	 }else if (predkosc>=50 && predkosc <70)
	 {
		 aktualny_bieg_=4;
	 }else if (predkosc>=70 && predkosc <90)
	 {
		 aktualny_bieg_=5;
	 }else if (predkosc>=90 && predkosc <110)
	 {
		 aktualny_bieg_=6;
	 }
 }
 void CZmianaBiegow:: wlacz_wyzszy_bieg()
  {
	  if (aktualny_bieg_ != bieg_max_)
	  {
		  aktualny_bieg_++;
	  }
  }
 void CZmianaBiegow:: wlacz_nizszy_bieg()
 {
	  if (aktualny_bieg_ != bieg_min_)
	  {
		  aktualny_bieg_--;
	  }
 }

 int CZmianaBiegow::jaki_bieg()
 {
	 return aktualny_bieg_;
 }
