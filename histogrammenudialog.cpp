#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
#pragma GCC diagnostic ignored "-Wunused-local-typedefs"
#include "histogrammenudialog.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <iterator>

#include <boost/lexical_cast.hpp>

#include <QFile>

#include "fileio.h"
#pragma GCC diagnostic pop

ribi::thst::MenuDialog::MenuDialog()
{

}

int ribi::thst::MenuDialog::ExecuteSpecific(const std::vector<std::string>& argv) noexcept
{
  const int argc = static_cast<int>(argv.size());
  if (argc == 1 || argc > 4)
  {
    std::cout << GetHelp() << '\n';
    return 1;
  }
  return 0;
}

ribi::About ribi::thst::MenuDialog::GetAbout() const noexcept
{
  About a(
    "Richel Bilderbeek",
    "TestHistogram",
    "tests the Histogram class",
    "December 3rd of 2015",
    "2015-2015",
    "http://www.richelbilderbeek.nl/ToolTestHistogram.htm",
    GetVersion(),
    GetVersionHistory()
  );
  return a;
}

std::string ribi::thst::MenuDialog::GetVersion() const noexcept
{
  return "2.0";
}

std::vector<std::string> ribi::thst::MenuDialog::GetVersionHistory() const noexcept
{
  return {
    "2015-05-08: Version 1.0: initial version",
    "2015-12-03: Version 2.0: moved to own GitHub",
  };
}

ribi::Help ribi::thst::MenuDialog::GetHelp() const noexcept
{
  return ribi::Help(
    "TestHistogram",
    "tests the Histogram class",
    {
      //No additional options
    },
    {
    }
  );
}
