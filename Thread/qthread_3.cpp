#include "qthread_3.h"

QThread_3::QThread_3()
{

}


void QThread_3::run()
{
    while (true) {
        qDebug()<<"run a run 3" << this->currentThreadId();
    }
}
