#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtCore/QCoreApplication>
#include <QtGui/QMainWindow>
#include <QtWebKit/QtWebKit>

#include "ui_mainwindow.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    enum ScreenOrientation
    {
        ScreenOrientationLockPortrait,
        ScreenOrientationLockLandscape,
        ScreenOrientationAuto
    };

    explicit MainWindow(QWidget *parent = 0);
    virtual ~MainWindow();
    void setOrientation(ScreenOrientation orientation); // Note that this will only have an effect on Symbian and Fremantle.
    void showExpanded();


private slots:
    void initialiserLesBoutons();
    void onButtonClicked();
    void onButtonClickedaaa();

    void on_pushButtonOnOff_clicked();
    void on_checkBox_stateChanged();
    void on_checkBox_toggled();
    void oncheckBoxclicked();

private:
    Ui::MainWindow * ui;
    QWebView * pageWeb;
    QString  code;

};

#endif // MAINWINDOW_H
