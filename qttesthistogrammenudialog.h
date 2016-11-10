#ifndef QTTESTHISTOGRAMMENUDIALOG_H
#define QTTESTHISTOGRAMMENUDIALOG_H

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#include "qthideandshowdialog.h"
#pragma GCC diagnostic pop

namespace Ui {
class QtTestHistogramMenuDialog;
}

namespace ribi {
namespace thst {

class QtMenuDialog : public QtHideAndShowDialog
{
  Q_OBJECT

public:
  explicit QtMenuDialog(QWidget *parent = 0);
  QtMenuDialog(const QtMenuDialog&) = delete;
  QtMenuDialog& operator=(const QtMenuDialog&) = delete;
  ~QtMenuDialog() noexcept;

protected:
  void keyPressEvent(QKeyEvent *);

private slots:
  void on_button_start_clicked();
  void on_button_about_clicked();
  void on_button_quit_clicked();

private:
  Ui::QtTestHistogramMenuDialog *ui;
};

} //~namespace thst
} //~namespace ribi

#endif // QTTESTHISTOGRAMMENUDIALOG_H
