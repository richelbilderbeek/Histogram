#include <QApplication>
#include "qttesthistogrammenudialog.h"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);
  ribi::thst::QtMenuDialog w;
  w.show();
  return a.exec();
}
