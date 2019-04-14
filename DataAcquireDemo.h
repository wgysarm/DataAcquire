#ifndef DATAACQUIREDEMO_H
#define DATAACQUIREDEMO_H

#include <QWidget>
#include "IconTool.h"
#include "InitAPP.h"
#include "TestObject.h"

class QToolButton;

namespace Ui {
class DataAcquireDemo;
}

class DataAcquireDemo : public QWidget
{
    Q_OBJECT

public:
    explicit DataAcquireDemo(QWidget *parent = 0);
    ~DataAcquireDemo();
    IconTool *pIconTool;
    InitAPP *pInitAPP;
    TestObject *test;
private slots:
    void initForm();
    void initNav();
    void buttonClicked();

private slots:
    void on_btnReturn_pressed();
    void on_btnMsg_pressed();


private:
    Ui::DataAcquireDemo *ui;
    QList<QToolButton *> btns;
};

#endif // DATAACQUIREDEMO_H
