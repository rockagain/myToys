#ifndef QTHREAD_2_H
#define QTHREAD_2_H
#include <QThread>
#include <QDebug>

class QThread_2 : public QThread
{
    Q_OBJECT
public:
    QThread_2();
protected:
    void run() override;
};

#endif // QTHREAD_2_H
