#ifndef DATAACQUIREDEMO_H
#define DATAACQUIREDEMO_H

#include <QWidget>

namespace Ui {
class DataAcquireDemo;
}

class DataAcquireDemo : public QWidget
{
    Q_OBJECT

public:
    explicit DataAcquireDemo(QWidget *parent = 0);
    ~DataAcquireDemo();

private:
    Ui::DataAcquireDemo *ui;
};

#endif // DATAACQUIREDEMO_H
