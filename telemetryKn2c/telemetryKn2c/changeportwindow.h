#ifndef CHANGEPORTWINDOW_H
#define CHANGEPORTWINDOW_H

#include <QDialog>

namespace Ui {
class ChangePortWindow;
}

class ChangePortWindow : public QDialog
{
    Q_OBJECT

public:
    explicit ChangePortWindow(QWidget *parent = nullptr);
    ~ChangePortWindow();

private:
    Ui::ChangePortWindow *ui;
};

#endif // CHANGEPORTWINDOW_H
