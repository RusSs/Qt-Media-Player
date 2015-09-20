#ifndef CCONTROLLPANEL_H
#define CCONTROLLPANEL_H

#include <QWidget>
#include <QPushButton>

class CControllPanel : public QWidget
{
    Q_OBJECT

public:

    explicit CControllPanel(QWidget *parent = 0);
    int getSoundSliderValue();


signals:

    void soundValueChanged();
    void playButtonClicked();
    void muteClicked();

public slots:


private:

};

#endif // CCONTROLLPANEL_H
