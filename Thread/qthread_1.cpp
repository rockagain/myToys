#include "qthread_1.h"



QThread_1::QThread_1()
{

}




void QThread_1::run()
{
    for(;;) {
        qDebug()<< "run a run 1" << this->currentThreadId();
    }

}
