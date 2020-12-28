#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "propgent.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    propGenT = new PropGenT;
}

MainWindow::~MainWindow()
{
    delete ui;
    delete propGenT;
}

void MainWindow::Test()
{
    propGenT->SetD(PG_MAKE_CHANGER(this), 1.1);

    propGenT->SetU(PG_MAKE_CHANGER(this), 2.1);
    propGenT->SetV(PG_MAKE_CHANGER(this), 2.2);

    propGenT->SetX(PG_MAKE_CHANGER(this), 3.1);
    propGenT->SetY(PG_MAKE_CHANGER(this), 3.2);
    propGenT->SetZ(PG_MAKE_CHANGER(this), 3.3);

    propGenT->SetR(PG_MAKE_CHANGER(this), 41);
    propGenT->SetG(PG_MAKE_CHANGER(this), 42);
    propGenT->SetB(PG_MAKE_CHANGER(this), 43);
    propGenT->SetA(PG_MAKE_CHANGER(this), 44);

    propGenT->SetPropsVec1(PG_MAKE_CHANGER(this), { 1.11 });
    propGenT->SetPropsVec2(PG_MAKE_CHANGER(this), { 2.11, 2.21 });
    propGenT->SetPropsVec3(PG_MAKE_CHANGER(this), { 3.11, 3.21, 3.31 });
    propGenT->SetPropsColor(PG_MAKE_CHANGER(this), { 141, 142, 143, 144 });

    qDebug() << "propGenT->GetD():[Vec1]: " << propGenT->GetD();

    qDebug() << "propGenT->GetU():[Vec2]: " << propGenT->GetU();
    qDebug() << "propGenT->GetV():[Vec2]: " << propGenT->GetV();

    qDebug() << "propGenT->GetX():[Vec3]: " << propGenT->GetX();
    qDebug() << "propGenT->GetY():[Vec3]: " << propGenT->GetY();
    qDebug() << "propGenT->GetZ():[Vec3]: " << propGenT->GetZ();

    qDebug() << "propGenT->GetR():[Color]: " << propGenT->GetR();
    qDebug() << "propGenT->GetG():[Color]: " << propGenT->GetG();
    qDebug() << "propGenT->GetB():[Color]: " << propGenT->GetB();
    qDebug() << "propGenT->GetA():[Color]: " << propGenT->GetA();

    auto vec1 = propGenT->GetPropsVec1();
    qDebug() << "propGenT->GetPropsVec1: "
             << std::get<0>(vec1);

    auto vec2 = propGenT->GetPropsVec2();
    qDebug() << "propGenT->GetPropsVec2: "
             << std::get<0>(vec2) << ", "
             << std::get<1>(vec2);

    auto vec3 = propGenT->GetPropsVec3();
    qDebug() << "propGenT->GetPropsVec3: "
             << std::get<0>(vec3) << ", "
             << std::get<1>(vec3) << ", "
             << std::get<2>(vec3);

    auto color = propGenT->GetPropsColor();
    qDebug() << "propGenT->GetPropsColor: "
             << std::get<0>(color) << ", "
             << std::get<1>(color) << ", "
             << std::get<2>(color) << ", "
             << std::get<3>(color);
}
