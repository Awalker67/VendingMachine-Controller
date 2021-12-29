#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QProcess>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    mProcess = new QProcess (this);
    connect(mProcess, &QProcess::readyReadStandardOutput, [&]())
    {

    });
    connect(mProcess, &QProcess::readyReadStandardError, [&]())
    {

    });
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_explorerToolButton_clicked()
{
    auto filename = QFileDialog::getOpenFileName(this, "Open File", "/", "EXE files (*.exe)");
    if (filename.isEmpty())
    {
        return;
    }
    ui-> programLineEdit->setText(filename);
}


void MainWindow::on_AddButton_clicked()
{
    auto arg = ui->argumentLineEdit
}

