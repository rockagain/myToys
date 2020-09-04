#include <iostream>
#include "qthread_1.h"
#include "qthread_2.h"
#include "qthread_3.h"
#include <QThread>

using namespace std;

int main()
{
    qDebug()<< QThread::currentThreadId();
    cout << "Hello World!" << endl;
    QThread_1 a;
    QThread_2 b;
    QThread_3 c;
    a.start();
    b.start();
    c.start();
    a.wait();
    b.wait();
    c.wait();

    return 0;
}
