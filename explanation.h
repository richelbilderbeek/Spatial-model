#ifndef EXPLANATION_H
#define EXPLANATION_H

#include <QWidget>

namespace Ui {
class Explanation;
}

class Explanation : public QWidget
{
    Q_OBJECT

public:
    explicit Explanation(QWidget *parent = 0);
    ~Explanation();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Explanation *ui;
};

#endif // EXPLANATION_H
