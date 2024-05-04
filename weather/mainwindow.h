#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCursor>
#include <QMenu>
#include <QMouseEvent>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QMessageBox>
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

    QNetworkAccessManager *mNetAccessManager;
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);

    QPoint mOffset;//窗口移动时  鼠标与窗口左上角的偏移值
    void getWeatherInfo(QString cityCode);
private slots:
    void onReplied(QNetworkReply *reply);


};
#endif // MAINWINDOW_H
