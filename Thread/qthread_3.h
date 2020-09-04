#ifndef QTHREAD_3_H
#define QTHREAD_3_H
#include <QThread>
#include <QDebug>

class QThread_3 : public QThread
{
    Q_OBJECT
public:
    QThread_3();
protected:
    void run() override;
};

#endif // QTHREAD_3_H
