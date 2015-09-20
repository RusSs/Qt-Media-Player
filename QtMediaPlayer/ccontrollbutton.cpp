#include "ccontrollbutton.h"
#include <QPainter>
#include <QDebug>
#include <QStylePainter>
#include <QStyleOptionButton>

CControllButton::CControllButton(QWidget *parent)
    : QPushButton(parent)
{
    this->setMouseTracking(true);
}

CControllButton::~CControllButton()
{
    qDebug()<<"Deleted";
}

void CControllButton::enterEvent(QEvent *e)
{

}

void CControllButton::leaveEvent(QEvent *e)
{
    this->setStyleSheet("");
}
