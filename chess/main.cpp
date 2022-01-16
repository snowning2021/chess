#include <QApplication>
#include "ChooseDlg.h"
#include "MainWnd.h"
#include <QTime>
#include <ctime>
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

   // QTime t = QTime::currentTime();
   // srand(t.msec()+t.second()*1000);

    ChooseDlg dlg;
    if(dlg.exec() != QDialog::Accepted)
        return 0;

    MainWnd wnd(dlg._selected);
    wnd.show();




    return app.exec();
}
