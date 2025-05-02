#ifndef DATETIMEWIDGET_H
#define DATETIMEWIDGET_H

#include <QWidget>
#include <QDate>
#include <QLabel>
#include <QTimer>

class datetimewidget : public QWidget
{
    Q_OBJECT
public:
    explicit datetimewidget(QWidget *parent = nullptr);

signals:
public:
    void updatetime();
private:
    QTimer *timer;
    QLabel *labeltop;
    QLabel *labelbottom;
    QString datestring;
    QString timestring;

};

#endif // DATETIMEWIDGET_H
