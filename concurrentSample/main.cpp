#include <QCoreApplication>
#include <QThread>
#include <QThreadPool>
#include <QtConcurrent/QtConcurrent>


void func(QString yourThread) {
    forever{
        qDebug()<<  yourThread +yourThread + yourThread + yourThread  << "   "<< QThread::currentThread();
    }
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int threadNumber = QThreadPool::globalInstance()->maxThreadCount();
    qDebug()<< threadNumber << "  your has this number Thread";
    for(int i = 0; i< threadNumber ; i++ ) {
        QFuture<void> fut = QtConcurrent::run(func, QString::number(i));
    }


    return a.exec();
}
