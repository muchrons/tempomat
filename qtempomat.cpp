#include "qtempomat.h"


QTempomat::QTempomat()
{
  qButton = new QPushButton("Koniec");
  pButton = new QPushButton("Przyspiesz");
  hButton = new QPushButton("Hamuj");
  mainLayout = new QVBoxLayout;
  connect(qButton, SIGNAL(clicked()), this, SLOT(squit()));
  connect(pButton, SIGNAL(clicked()), this, SLOT(sprzyspiesz()));
  connect(hButton, SIGNAL(clicked()), this, SLOT(shamuj()));

  mainLayout->addWidget(qButton);
  QWidget *window = new QWidget();
  window->setLayout(mainLayout);
  setCentralWidget(window);
  setWindowTitle(tr("Tempomat"));
}

void QTempomat::sprzyspiesz()
{
}

void QTempomat::shamuj()
{
}

void QTempomat::squit()
{
  this->close();
}
