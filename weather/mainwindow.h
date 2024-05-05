#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCursor>
#include <QMenu>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
#include "weatherData.h"
#include "weatherTool.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void contextMenuEvent(QContextMenuEvent *event);

private:
    Ui::MainWindow *ui;
    QMenu *mExitMenu; //右键退出的菜单
    QAction *mExitAct;//退出的行为

    QNetworkAccessManager *mNetAccessManager;\
    Today mToday;
    Day mDay[6];
    //星期和日期
    QList<QLabel*> mWeekList;
    QList<QLabel*> mDateList;
    //天气和天气图标
    QList<QLabel*> mTypeList;
    QList<QLabel*> mTypeIconList;
    //天气污染指数
    QList<QLabel*> mAqiList;
    //风力和风向
    QList<QLabel*> mFxList;
    QList<QLabel*> mF1List;

    QMap<QString,QString> todayTypeMap;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    QPoint mOffset;//窗口移动时  鼠标与窗口左上角的偏移值
    void getWeatherInfo(QString cityName);
    void paresJson(QByteArray byteArray);
    void updateUI();

    bool eventFilter(QObject *watched, QEvent *event);

    //绘制曲线
    void painHighCurve();
    void paintLowCurve();
    void panit(QString HighOrLow);
private slots:
    void onReplied(QNetworkReply *reply);


    void on_btnSearch_clicked();
};
#endif // MAINWINDOW_H
