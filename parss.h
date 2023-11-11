#ifndef PARSS_H
#define PARSS_H
#include <QString>
#include <QList>
class Pars
{
    QList <QChar> operators;
    QVector <QString> rez_operators;
    QList <QString> operands;
    int prior;
public:
    Pars()
    {

    }
    void parsing(QString str);
    int priority(char str);
    double calcul();
    void clear();
};

#endif // PARSS_H
