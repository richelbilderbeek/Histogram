#ifndef QTTESTHISTOGRAMMAINDIALOG_H_H
#define QTTESTHISTOGRAMMAINDIALOG_H_H

#include "qthideandshowdialog.h"

struct QwtPlotCurve;

namespace Ui {
  class QtTestHistogramMainDialog;
}

namespace ribi {
namespace thst {

class QtMainDialog : public ribi::QtHideAndShowDialog
{
  Q_OBJECT
  
public:
  explicit QtMainDialog(QWidget *parent = 0);
  QtMainDialog(const QtMainDialog&) = delete;
  QtMainDialog& operator=(const QtMainDialog&) = delete;
  ~QtMainDialog();

private slots:
  void Run();

private:
  Ui::QtTestHistogramMainDialog *ui;

  QwtPlotCurve * const m_curve_histogram;

  #ifndef NDEBUG
  static void Test() noexcept;
  #endif
};

} //~namespace thst
} //~namespace ribi

#endif // QTTESTHISTOGRAMMAINDIALOG_H_H
