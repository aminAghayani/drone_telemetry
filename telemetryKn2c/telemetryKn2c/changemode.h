#ifndef CHANGEMODE_H
#define CHANGEMODE_H

#include <QDialog>

namespace Ui {
class ChangeMode;
}

class ChangeMode : public QDialog
{
    Q_OBJECT

public:
    explicit ChangeMode(QWidget *parent = nullptr);
    ~ChangeMode();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::ChangeMode *ui;
};

#endif // CHANGEMODE_H
