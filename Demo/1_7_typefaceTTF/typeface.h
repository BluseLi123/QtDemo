#ifndef TYPEFACE_H
#define TYPEFACE_H

#include <QtCore>
#include <QtGui>
#if (QT_VERSION > QT_VERSION_CHECK(5,0,0))
#include <QtWidgets>
#endif

class Typeface : public QObject
{
    Q_OBJECT

public:
//    Typeface();
    static Typeface *Instance();
    explicit Typeface(QObject *parent = 0);
    QString loadFontFamilyFromFiles(const QString &fontFileName);

private:
    static Typeface *self;    //对象自身
    QFont iconFont;             //图形字体
};

#endif // TYPEFACE_H
