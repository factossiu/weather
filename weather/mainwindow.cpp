#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //设置窗口无边框
    setWindowFlag(Qt::FramelessWindowHint);
    //设置固定窗口
    setFixedSize(width(),height());
    //构建右键菜单
    mExitMenu = new QMenu(this);
    mExitAct = new QAction();

    mExitAct->setText("退出");
    mExitAct->setIcon(QIcon(":/res/close.png"));

    mExitMenu->addAction(mExitAct);

    connect(mExitAct,QAction::triggered,this,[=]{qApp->exit(0);});
    mNetAccessManager = new QNetworkAccessManager(this);
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);
    //直接在构造中，请求天气数据
    getWeatherInfo("101010100");

}

MainWindow::~MainWindow()
{
    delete ui;
}
//重写父类的虚函数
//父类中默认的实现 是忽略右健菜单事件
//重写之后，就可以处理右键菜单
void MainWindow::contextMenuEvent(QContextMenuEvent *event)
{
    //弹出右键菜单
    mExitMenu->exec(QCursor::pos());

    // event->accept();
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
   mOffset =  event->globalPos() - this->pos();
}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
   this->move(event->globalPos() - mOffset);
}

void MainWindow::getWeatherInfo(QString cityCode)
{

   QUrl url("http://t.weather.itboy.net/api/weather/city/" + cityCode);
   mNetAccessManager->get(QNetworkRequest(url));
}

void MainWindow::onReplied(QNetworkReply *reply)
{
   int status_code = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
  /* qDebug()<<"oeration:"<<reply->operation();
   qDebug()<<"status_code:"<<status_code;
   qDebug()<<"url"<<reply->url();
   qDebug()<<"header"<<reply->rawHeaderList();
   qDebug() << "onReplied success";*/

   if(reply->error() != QNetworkReply ::NoError || status_code != 200){
       qDebug()<< reply->errorString().toLatin1().data();
       QMessageBox::warning(this,"天气","请求数据失败",QMessageBox::Ok);
   }
   else{
      QByteArray byteArray = reply->readAll();
      qDebug() << "read all:"  << byteArray.data();
   }
   reply->deleteLater();
}

