include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)
include(../RibiLibraries/Qwt.pri)

#Specific, console
include(Histogram.pri)
include(HistogramDemoDesktop.pri)

SOURCES += qtmain.cpp
