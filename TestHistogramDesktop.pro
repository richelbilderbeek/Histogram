include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiLibraries/GeneralConsole.pri)
include(../RibiLibraries/GeneralDesktop.pri)
include(../RibiLibraries/Qwt.pri)

#Specific, console
include(CppHistogram.pri)
include(TestHistogramDesktop.pri)

SOURCES += qtmain.cpp
