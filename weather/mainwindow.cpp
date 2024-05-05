#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJsonDocument>
#include <QJsonArray>
#include<QJsonObject>
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
    //将控件添加到控件数组
    mWeekList << ui->lblWeek0
              << ui->lblWeek1
              << ui->lblWeek2
              << ui->lblWeek3
              << ui->lblWeek4
              << ui->lblWeek5;
    mDateList << ui->lblDate0
              << ui->lblDate1
              << ui->lblDate2
              << ui->lblDate3
              << ui->lblDate4
              << ui->lblDate5;
    mTypeList << ui->lblType0
               << ui->lblType1
               << ui->lblType2
               << ui->lblType3
               << ui->lblType4
               << ui->lblType5;
    mTypeIconList << ui->lblTypeIcon0
                   << ui->lblTypeIcon1
                   << ui->lblTypeIcon2
                   << ui->lblTypeIcon3
                   << ui->lblTypeIcon4
                   << ui->lblTypeIcon5;
    mAqiList <<ui->lblQuality0
             <<ui->lblQuality1
             <<ui->lblQuality2
             <<ui->lblQuality3
             <<ui->lblQuality4
             <<ui->lblQuality5;
    mFxList<<ui->lblFx0
           <<ui->lblFx1
           <<ui->lblFx2
           <<ui->lblFx3
           <<ui->lblFx4
            <<ui->lblFx5;
    mF1List<<ui->lblFl0
           <<ui->lblFl1
           <<ui->lblFl2
           <<ui->lblFl3
           <<ui->lblFl4
           <<ui->lblFl5;
                         //3.网络请求
    mNetAccessManager = new QNetworkAccessManager(this);
    connect(mNetAccessManager,&QNetworkAccessManager::finished,this,&MainWindow::onReplied);
    todayTypeMap.insert("暴雪",":/res/type/BaoXue.png");
    todayTypeMap.insert("暴雨",":/res/type/BaoYu.png");
    todayTypeMap.insert("暴雨到大暴雨",":/res/type/BaoYuDaoDaBaoYu.png");
    todayTypeMap.insert("大暴雨",":/res/type/DaBaoYu.png");
    todayTypeMap.insert("大暴雨到特大暴雨",":/res/type/DaBaoYuDaoTeDaBaoYu.png");
    todayTypeMap.insert("大到暴雪",":/res/type/DaDaoBaoXue.png");
    todayTypeMap.insert("大到暴雨",":/res/type/DaDaoBaoYu.png");
    todayTypeMap.insert("大雪",":/res/type/DaXue.png");
    todayTypeMap.insert("大雨",":/res/type/DaYu.png");
    todayTypeMap.insert("冻雨",":/res/type/DongYu.png");
    todayTypeMap.insert("多云",":/res/type/DuoYun.png");
    todayTypeMap.insert("浮沉",":/res/type/FuChen.png");
    todayTypeMap.insert("雷阵雨",":/res/type/LeiZhenYu.png");
    todayTypeMap.insert("雷阵雨伴有冰雹",":/res/type/LeiZhenYuBanYouBingBao.png");
    todayTypeMap.insert("霾",":/res/type/Mai.png");
    todayTypeMap.insert("强沙城暴",":/res/type/QiangShaChenBao.png");
    todayTypeMap.insert("晴",":/res/type/Qing.png");
    todayTypeMap.insert("沙城暴",":/res/type/ShaChenBao.png");
    todayTypeMap.insert("特大暴雨",":/res/type/TeDaBaoYu.png");
    todayTypeMap.insert("undefined",":/res/type/undefined.png");
    todayTypeMap.insert("雾",":/res/type/Wu.png");
    todayTypeMap.insert("小到中雪",":/res/type/XiaoDaoZhongXue.png");
    todayTypeMap.insert("小到中雨",":/res/type/XiaoDaoZhongYu.png");
    todayTypeMap.insert("小雪",":/res/type/XiaoXue.png");
    todayTypeMap.insert("小雨",":/res/type/XiaoYu.png");
    todayTypeMap.insert("雪",":/res/type/Xue.png");
    todayTypeMap.insert("扬沙",":/res/type/YangSha.png");
    todayTypeMap.insert("阴",":/res/type/Yin.png");
    todayTypeMap.insert("雨",":/res/type/Yu.png");
    todayTypeMap.insert("雨夹雪",":/res/type/YuJiaXue.png");
    todayTypeMap.insert("阵雪",":/res/type/ZhenXue.png");
    todayTypeMap.insert("阵雨",":/res/type/ZhenYu.png");
    todayTypeMap.insert("中到大雪",":/res/type/ZhongDaoDaXue.png");
    todayTypeMap.insert("中到大雨",":/res/type/ZhongDaoDaYu.png");
    todayTypeMap.insert("中雪",":/res/type/ZhongXue.png");
    todayTypeMap.insert("中雨",":/res/type/ZhongYu.png");
    //直接在构造中，请求天气数据
    getWeatherInfo("重庆");

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

void MainWindow::getWeatherInfo(QString cityName)
{
   QString cityCode = weatherTool::getCityCode(cityName);
   if(cityCode.isEmpty()){
       QMessageBox::warning(this,"天气","请检查输入是否正确!",QMessageBox::Ok);
   }
   QUrl url("http://t.weather.itboy.net/api/weather/city/" + cityCode);
   mNetAccessManager->get(QNetworkRequest(url));
}

void MainWindow::paresJson(QByteArray byteArray) //解析返过来的Json数据
{
   QJsonParseError err;
   QJsonDocument doc = QJsonDocument::fromJson(byteArray,&err);
   if(err.error!=QJsonParseError::NoError){
       return;
   }
   QJsonObject rootObj = doc.object();
   qDebug()<<rootObj.value("message").toString();
   //解析日期和城市
    mToday.date =  rootObj.value("date").toString();
    mToday.city = rootObj.value("cityInfo").toObject().value("city").toString();
    //2.解析昨天
   QJsonObject objData =  rootObj.value("data").toObject();
   QJsonObject objYesterday = objData.value("yesterday").toObject();
   mDay[0].week= objYesterday.value("week").toString();
   mDay[0].week= objYesterday.value("ymd").toString();

   mDay[0].type = objYesterday.value("type").toString();
   QString s;

   s = objYesterday.value("high").toString().split(" ").at(1);
   s.left(s.length()-1);
   mDay[0].high = s.toInt();

   s = objYesterday.value("low").toString().split(" ").at(1);
   s.left(s.length()-1);
   mDay[0].low = s.toInt();
    //风向风力
   mDay[0].fx = objYesterday.value("fx").toString();
   mDay[0].f1 = objYesterday.value("fl").toString();
    //aqi
   mDay[0].aqi = objYesterday.value("aqi").toDouble();

   //3.解析forcast中5天的数据
   QJsonArray forecastArr = objData.value("forecast").toArray();

   for(int i=0 ;i<5;i++){
      QJsonObject objForecast = forecastArr[i].toObject();
      mDay[i+1].week = objForecast.value("week").toString();
      mDay[i+1].date = objForecast.value("ymd").toString();
      //天气类型
      mDay[i+1].type = objForecast.value("type").toString();
      //高温低温
      s = objForecast.value("high").toString().split(" ").at(1);
      s = s.left(s.length() - 1 );
      mDay[i+1].high = s.toInt();
      //低温
      s = objForecast.value("low").toString().split(" ").at(1);
      s = s.left(s.length() - 1 );
      mDay[i+1].low = s.toInt();

      mDay[i+1].fx = objForecast.value("fx").toString();
      mDay[i+1].f1 = objForecast.value("fl").toString();
          //aqi
      mDay[i+1].aqi = objForecast.value("aqi").toDouble();

   }
   //4.解析今天的数据
   mToday.ganmao = objData.value("ganmao").toString();
   mToday.wendu = objData.value("wendu").toString().toInt();
   mToday.shidu = objData.value("shidu").toString();
   mToday.pm25 = objData.value("pm25").toDouble();
   mToday.quality = objData.value("quality").toString();
   //5.forecast中第一个数组元素也是今天的数据
   mToday.type = mDay[1].type;
   mToday.fx = mDay[1].fx;
   mToday.f1 = mDay[1].f1;
   mToday.high = mDay[1].high;
   mToday.low = mDay[1].low;
   //更新UI
   updateUI();
}

void MainWindow::updateUI()
{   //更新日期和城市
  ui->lblDate->setText(QDateTime::fromString(mToday.date,"yyyyMMdd").toString("yyyy/MM/dd")+" " + mDay[1].week);
   ui->lblCity->setText(mToday.city);
    //2.更新今天
   ui->lblTemp->setText(QString::number(mToday.wendu)+ "℃");
 //  ui->lblTemp->setText(mToday.type);
   ui->lblLowHigh->setText(QString::number(mToday.low) + "~" + QString::number(mToday.high) + "℃" );
   ui->lblTypeIcon->setPixmap(todayTypeMap[mToday.type]);

    ui->lblGanMao_2->setText("感冒指数" + mToday.ganmao);
    ui->lblWindFx_2->setText(mToday.fx);
    ui->lblWindFl_2->setText(mToday.f1);
    ui->lblPM25_2->setText(QString::number(mToday.pm25));
    ui->lblShiDu_2->setText(mToday.shidu);

    ui->lblQuality_2->setText(mToday.quality);
    //3.更新六天
    for (int i = 0; i < 6; ++i) {
        //更新日期和时间
        mWeekList[i]->setText("周"+mDay[i].week.right(1));
        ui->lblWeek0->setText("昨天");
        ui->lblWeek1->setText("今天");
        ui->lblWeek2->setText("明天");
        QStringList ymdList =  mDay[i].date.split("-");
        mDateList[i]->setText(ymdList[1]+"-" + ymdList[2]);

        //更新天气类型
        mTypeList[i]->setText(mDay[i].type);
        mTypeIconList[i]->setPixmap(todayTypeMap[mDay[i].type]);
        //更新空气质量
        if(mDay[i].aqi >= 0 && mDay[i].aqi <= 50)
        {
            mAqiList[i]->setText("优");
            mAqiList[i]->setStyleSheet("background-color: rgb(121,184,0);");
        }
        else if(mDay[i].aqi > 50 && mDay[i].aqi <= 100)
        {
            mAqiList[i]->setText("良");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,178,23);");
        }
        else if(mDay[i].aqi > 100 && mDay[i].aqi <= 150)
        {
            mAqiList[i]->setText("轻度");
            mAqiList[i]->setStyleSheet("background-color: rgb(255,87,97);");
        }
        else if(mDay[i].aqi > 150 && mDay[i].aqi <= 200)
        {
            mAqiList[i]->setText("中度");
            mAqiList[i]->setStyleSheet("background-color: rgb(235,17,27);");
        }
        else if(mDay[i].aqi > 200 && mDay[i].aqi <= 250)
        {
            mAqiList[i]->setText("重度");
            mAqiList[i]->setStyleSheet("background-color: rgb(170,0,0);");
        }
        else
        {
           mAqiList[i]->setText("严重");
           mAqiList[i]->setStyleSheet("background-color: rgb(110,0,0);");
        }
        //更新风力风向
        mFxList[i]->setText(mDay[i].fx);
        mF1List[i]->setText(mDay[i].f1);


    }
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
      paresJson(byteArray);
   }
   reply->deleteLater();
}


void MainWindow::on_btnSearch_clicked()
{
   QString cityName = ui->leCity->text();
   getWeatherInfo(cityName);
}

