#ifndef CCONTROLLBUTTON_H
#define CCONTROLLBUTTON_H

#include <QPushButton>
#include <QEvent>


class  CControllButton : public  QPushButton
{
public:

   explicit CControllButton(QWidget *parent = 0);
   ~CControllButton();

protected:
   void enterEvent(QEvent* e) Q_DECL_OVERRIDE;
   void leaveEvent(QEvent* e) Q_DECL_OVERRIDE;
};

#endif // CCONTROLLBUTTON_H
