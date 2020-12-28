#ifndef PROPGENT_H
#define PROPGENT_H

#include <QDebug>
#include <QObject>
#include "propgen.h"

class PropGenT : public QObject
{
    Q_OBJECT
public:
    explicit PropGenT(QObject *parent = nullptr);

signals:
    PG_SIGNAL_1(Vec1, D, double)
    PG_SIGNAL_2(Vec2, U, V, double, double)
    PG_SIGNAL_3(Vec3, X, Y, Z, double, double, double)
    PG_SIGNAL_4(Color, R, G, B, A, int, int, int, int)

    PG_SETGET_1(Vec1, D, double)
    PG_SETGET_2(Vec2, U, V, double, double)
    PG_SETGET_3(Vec3, X, Y, Z, double, double, double)
    PG_SETGET_4(Color, R, G, B, A, int, int, int, int)
};

#endif // PROPGENT_H
