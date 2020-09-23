#ifndef TEXTEDITOR_H
#define TEXTEDITOR_H

#include <QTabWidget>
#include <QTextEdit>

class textEditor : public QTabWidget
{
public:
    textEditor();


private:
    QTextEdit *text_Edit;
};

#endif // TEXTEDITOR_H
