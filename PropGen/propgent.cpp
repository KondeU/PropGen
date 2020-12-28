#include "propgent.h"

PropGenT::PropGenT(QObject *parent) : QObject(parent)
{
    connect(this, &PropGenT::Vec1Changed, this,
    [](uintptr_t changer, double data) {
        qDebug() << "Vec1Changed:"
                 << changer << "," << data;
    });

    connect(this, &PropGenT::Vec2Changed, this,
    [](uintptr_t changer, double u, double v) {
        qDebug() << "Vec2Changed:"
                 << changer << "," << u << "," << v;
    });

    connect(this, &PropGenT::Vec3Changed, this,
    [](uintptr_t changer, double x, double y, double z) {
        qDebug() << "Vec3Changed:"
                 << changer << "," << x << "," << y << "," << z;
    });

    connect(this, &PropGenT::ColorChanged, this,
    [](uintptr_t changer, int r, int g, int b, int a) {
        qDebug() << "ColorChanged:"
                 << changer << "," << r << "," << g << "," << b << "," << a;
    });
}
