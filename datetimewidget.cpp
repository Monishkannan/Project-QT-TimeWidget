#include "datetimewidget.h"
#include <QVBoxLayout>

datetimewidget::datetimewidget(QWidget *parent) : QWidget(parent)
{

    QVBoxLayout *layout =new QVBoxLayout(this);
    QFont mFont("consolas",20,QFont::Bold);
    QSizePolicy policy(QSizePolicy::Expanding,QSizePolicy::Fixed);
    QSizePolicy flexiblePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);



    datestring =QDate::currentDate().toString(Qt::TextDate);
    labeltop = new QLabel(this);
    (*labeltop).setText(datestring);
    labeltop->setFont(mFont);
    (*labeltop).setAlignment(Qt::AlignCenter);
    setSizePolicy(policy);
    QString mkk = QString("background-color: #00ff00; color: #000000;");
    labeltop->setStyleSheet(mkk);



    timestring=QTime::currentTime().toString();
    labelbottom = new QLabel(this);
    (*labelbottom).setText(timestring);
    (*labelbottom).setFont(mFont);
    labelbottom->setAlignment(Qt::AlignCenter);
    QString css = QString("background-color : #00eff9;color : #fffff1");
    labelbottom->setStyleSheet(css);


    (*layout).addWidget(labeltop);
    (*layout).addWidget(labelbottom);
    setLayout(layout);
    labeltop->setSizePolicy(policy);
    labelbottom->setSizePolicy(flexiblePolicy);

    //timercode
    timer =new QTimer(this);
    timer->setInterval(1000);
    connect(timer,&QTimer::timeout,this,&datetimewidget::updatetime);
    timer->start();


}

void datetimewidget::updatetime()
{
    timestring=QTime::currentTime().toString();
    labelbottom->setText(timestring );

    if(datestring!= (QDate::currentDate().toString(Qt::TextDate)))
    {
        datestring =QDate::currentDate().toString(Qt::TextDate);
        labeltop->setText(datestring);

    }


}
