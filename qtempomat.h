#include <Qt/qpushbutton.h>
#include <Qt/qlayout.h>
#include <Qt/qmainwindow.h>

class QTempomat: public QMainWindow
{

  Q_OBJECT
public:
    QTempomat();

public slots:

    void sprzyspiesz();
    void shamuj();
    void squit();

private:
    QPushButton *qButton;
    QPushButton *pButton;
    QPushButton *hButton;
    QVBoxLayout *mainLayout;
};
