#ifndef QTHREAD_1_H
#define QTHREAD_1_H
#include <QThread>
#include <QDebug>

class QThread_1 : public QThread
{
    Q_OBJECT
public:
    QThread_1();
protected:
    void run() override;
};

#endif // QTHREAD_1_H
