#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "qrencode.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:

    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void setString(QString str);
    int getQRWidth() const;
    bool saveImage(QString name, int size);

private:
    void draw(QPainter &painter, int width, int height);

protected:
    void paintEvent(QPaintEvent *);
    QSize sizeHint() const;
    QSize minimumSizeHint() const;

private:
    Ui::Widget *ui;
    QString string;
    QRcode *qr;


};

#endif // WIDGET_H
