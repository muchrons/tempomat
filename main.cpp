#include <Qt/qapplication.h>
#include "qtempomat.h"



int main(int argc, char **argv)
{
	QApplication app(argc, argv);
    QTempomat tempomat;
    tempomat.show();
	return app.exec();
}
