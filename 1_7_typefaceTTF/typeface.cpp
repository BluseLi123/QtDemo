#include "typeface.h"

//单例模式
Typeface *Typeface::self = 0;
Typeface *Typeface::Instance()
{
    if (!self) {
        QMutex mutex;
        QMutexLocker locker(&mutex);
        if (!self) {
            self = new Typeface;
        }
    }

    return self;
}

Typeface::Typeface(QObject *parent) : QObject(parent)
{
//    int fontId = QFontDatabase::addApplicationFont(":/Resources/Font-OPPOSans/OPPOSans-M.ttf");
//    QStringList fontName = QFontDatabase::applicationFontFamilies(fontId);

//    if (fontName.count() > 0) {
//        iconFont = QFont(fontName.at(0));
//    } else {
//        qDebug() << "load ttf error";
//        return ;
//    }

//    //全局设置
//    QApplication::setFont(iconFont);
}

QString Typeface::loadFontFamilyFromFiles(const QString &fontFileName)
{
    static QHash<QString, QString> tmd;
    if (tmd.contains(fontFileName)) {
        return tmd.value(fontFileName);
    }
    QString font = "";
    QFile fontFile(fontFileName);
    if(!fontFile.open(QIODevice::ReadOnly)) {
        qDebug()<<"Open font file error";
        return font;
    }

    int loadedFontID = QFontDatabase::addApplicationFontFromData(fontFile.readAll());
    QStringList loadedFontFamilies = QFontDatabase::applicationFontFamilies(loadedFontID);
    if(!loadedFontFamilies.empty()) {
        font = loadedFontFamilies.at(0);
    }
    fontFile.close();

    if (!(font.isEmpty()))
        tmd.insert(fontFileName, font);
    return font;
}
