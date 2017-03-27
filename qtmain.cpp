#include <QTimer>
#include <QApplication>
#include "qttesthistogrammenudialog.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::thst::QtMenuDialog w;

  if (argc == 2)
  {
    QTimer::singleShot(1000, &w, SLOT(close()));
  }

  w.show();
  return a.exec();
}
