#ifndef DAWGMAVISION_H
#define DAWGMAVISION_H

#include <QMainWindow>

namespace Ui {
class DawgmaVision;
}

class DawgmaVision : public QMainWindow
{
    Q_OBJECT

public:
    explicit DawgmaVision(QWidget *parent = 0);
    ~DawgmaVision();

private:
    Ui::DawgmaVision *ui;
};

#endif // DAWGMAVISION_H
