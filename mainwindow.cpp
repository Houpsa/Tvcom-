#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug("MainWindow::MainWindow utilisÃ©");
    initialiserLesBoutons();
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOrientation(ScreenOrientation orientation)
{
#if defined(Q_OS_SYMBIAN)
    // If the version of Qt on the device is < 4.7.2, that attribute won't work
    if (orientation != ScreenOrientationAuto) {
        const QStringList v = QString::fromAscii(qVersion()).split(QLatin1Char('.'));
        if (v.count() == 3 && (v.at(0).toInt() << 16 | v.at(1).toInt() << 8 | v.at(2).toInt()) < 0x040702) {
            qWarning("Screen orientation locking only supported with Qt 4.7.2 and above");
            return;
        }
    }
#endif // Q_OS_SYMBIAN

    Qt::WidgetAttribute attribute;
    switch (orientation) {
#if QT_VERSION < 0x040702
    // Qt < 4.7.2 does not yet have the Qt::WA_*Orientation attributes
    case ScreenOrientationLockPortrait:
        attribute = static_cast<Qt::WidgetAttribute>(128);
        break;
    case ScreenOrientationLockLandscape:
        attribute = static_cast<Qt::WidgetAttribute>(129);
        break;
    default:
    case ScreenOrientationAuto:
        attribute = static_cast<Qt::WidgetAttribute>(130);
        break;
#else // QT_VERSION < 0x040702
    case ScreenOrientationLockPortrait:
        attribute = Qt::WA_LockPortraitOrientation;
        break;
    case ScreenOrientationLockLandscape:
        attribute = Qt::WA_LockLandscapeOrientation;
        break;
    default:
    case ScreenOrientationAuto:
        attribute = Qt::WA_AutoOrientation;
        break;
#endif // QT_VERSION < 0x040702
    };
    setAttribute(attribute, true);
}

void MainWindow::showExpanded()
{
#ifdef Q_OS_SYMBIAN
    showFullScreen();
#elif defined(Q_WS_MAEMO_5)
    showMaximized();
#else
    show();
#endif
}


void MainWindow::initialiserLesBoutons()
{
    qDebug("initialiserLesBoutons()");
    code = QString("4837013");

    ui->pushButton_1->setProperty("key", "1");
    connect(ui->pushButton_1, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_2->setProperty("key", "2");
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_3->setProperty("key", "3");
    connect(ui->pushButton_3, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_4->setProperty("key", "4");
    connect(ui->pushButton_4, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_5->setProperty("key", "5");
    connect(ui->pushButton_5, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_6->setProperty("key", "6");
    connect(ui->pushButton_6, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_7->setProperty("key", "7");
    connect(ui->pushButton_7, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_8->setProperty("key", "8");
    connect(ui->pushButton_8, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_9->setProperty("key", "9");
    connect(ui->pushButton_9, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButton_0->setProperty("key", "0");
    connect(ui->pushButton_0, SIGNAL(clicked()), this, SLOT(onButtonClickedaaa()));

    ui->pushButtonVolmoins->setProperty("key", "vol_dec");
    connect(ui->pushButtonVolmoins, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButtonVolUp->setProperty("key", "vol_inc");
    connect(ui->pushButtonVolUp, SIGNAL(clicked()), this, SLOT(onButtonClicked()));


    ui->pushButtonMoins->setProperty("key", "prgm_dec");
    connect(ui->pushButtonMoins, SIGNAL(clicked()), this, SLOT(onButtonClicked()));
    ui->pushButtonPlus->setProperty("key", "prgm_inc");
    connect(ui->pushButtonPlus, SIGNAL(clicked()), this, SLOT(onButtonClicked()));

    ui->pushButtonOnOff->setProperty("key", "power");
    connect(ui->pushButtonOnOff, SIGNAL(clicked()), this, SLOT(onButtonClicked()));

    ui->checkBox;
     connect(ui->checkBox, SIGNAL(clicked()), this, SLOT(oncheckBoxclicked()));
    //disconnect(ui->checkBox, SIGNAL,(clicked()), this, SLOT(oncheckBoxclicked()));

}


void MainWindow::onButtonClicked()
{
    QString key = sender()->property("key").toString();
    if (ui->checkBox->isChecked())
    {
        pageWeb = new QWebView;
        pageWeb->load(QUrl(QString("http://hd1.freebox.fr/pub/remote_control?key=%1&code=%2&long=true").arg(key).arg(code)));
        qDebug("onButtonClicked utilisé");
    }
    else
    {
    pageWeb = new QWebView;
    pageWeb->load(QUrl(QString("http://hd1.freebox.fr/pub/remote_control?key=%1&code=%2").arg(key).arg(code)));
    qDebug("onButtonClicked utilisé");
    }
}


void MainWindow::oncheckBoxclicked()
{

}
void MainWindow::onButtonClickedaaa(){}
void MainWindow::on_checkBox_stateChanged(){}
void MainWindow::on_pushButtonOnOff_clicked(){}
void MainWindow::on_checkBox_toggled(){}

