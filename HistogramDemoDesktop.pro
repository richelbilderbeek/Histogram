include(../RibiLibraries/DesktopApplicationNoWeffcpp.pri)
include(../RibiLibraries/Boost.pri)
include(../RibiClasses/CppAbout/CppAbout.pri)
include(../RibiClasses/CppFileIo/CppFileIo.pri)
include(../RibiClasses/CppHelp/CppHelp.pri)
include(../RibiClasses/CppMenuDialog/CppMenuDialog.pri)
include(../RibiLibraries/GeneralDesktop.pri)
include(../RibiLibraries/Qwt.pri)

#Specific, console
include(Histogram.pri)
include(HistogramDemoDesktop.pri)

SOURCES += qtmain.cpp
