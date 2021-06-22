QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutme_page.cpp \
    admin_page.cpp \
    buy.cpp \
    main.cpp \
    login_page.cpp \
    member.cpp \
    product.cpp \
    user_page.cpp

HEADERS += \
    aboutme_page.h \
    admin_page.h \
    buy.h \
    login_page.h \
    member.h \
    product.h \
    user_page.h

FORMS += \
    aboutme_page.ui \
    admin_page.ui \
    login_page.ui \
    user_page.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resource.qrc
