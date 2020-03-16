#ifndef HISTORICO_H
#define HISTORICO_H

#include <QDialog>

namespace Ui {
class Historico;
}

class Historico : public QDialog
{
    Q_OBJECT

public:
    explicit Historico(QWidget *parent = nullptr);
    ~Historico();

private:
    Ui::Historico *ui;
};

#endif // HISTORICO_H
