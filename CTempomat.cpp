#include "CTempomat.h"


CTempomat::CTempomat(CCzujnikPredkosciJazdy *cz):
	cz_(cz),
	predkosc_zadana_(0),
	wlaczony_(false)
{
}

CTempomat::~CTempomat()
{
}

void CTempomat::uruchom()
{
	wlaczony_ = true;
	predkosc_zadana_ = cz_->zmierz_predkosc();
}

void CTempomat::wylacz()
{
	wlaczony_ = false;
}

bool CTempomat::jest_wlaczony()
{
	return wlaczony_;
}

int CTempomat::predkosc_zadana()
{
	return predkosc_zadana_;
}
