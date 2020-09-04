#include "qthread_2.h"

QThread_2::QThread_2()
{

}



void QThread_2::run()
{
    while (true) {
        qDebug()<< "run a run 2" << this->currentThreadId();
    }

}
