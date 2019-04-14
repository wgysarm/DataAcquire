#ifndef INITAPP_H
#define INITAPP_H

#include <QObject>
#include <QEvent>
#include <QWidget>
#include <QVariant>
#include <QMouseEvent>
#include <QApplication>

class InitAPP : public QObject
{
    Q_OBJECT
public:
    explicit InitAPP(QObject *parent = 0);
    ~InitAPP();
    static InitAPP *Instance();
    void start();
protected:
    bool eventFilter(QObject *obj, QEvent *evt);

private:
    static InitAPP *self;
signals:

public slots:
};

#endif // INITAPP_H
