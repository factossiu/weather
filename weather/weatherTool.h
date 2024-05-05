#ifndef WEATHERTOOL_H
#define WEATHERTOOL_H

#include <QString>
#include <QMap>
#include <QFile>
#include <QByteArray>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonParseError>
#include <QJsonValue>
#include <QJsonArray>

class weatherTool
{
public:
    static QString getCityCode(QString cityName)
    {
        if (cityMap1.isEmpty())
            InitcityMap1();

        QMap<QString, QString>::Iterator it = cityMap1.find(cityName);
        if (it == cityMap1.end())
        {
            it = cityMap1.find(cityName + "市");
        }
        if (it != cityMap1.end())
            return it.value();
        else
            return "";
    }

private:
    inline static QMap<QString, QString> cityMap1; // 城市名称和城市代码的映射表

    /**
     * @brief InitcityMap11 初始化城市映射表
     */
    static void InitcityMap1()
    {
        // 1. 读取文件
        QString filePath = "E:\\school\\projiect-tianqi\\weather\\citycode.json";
        QFile file(filePath);
        file.open(QIODevice::ReadOnly | QIODevice::Text);
        QByteArray json = file.readAll();

        // 2. 解析并写入到map
        QJsonParseError err;
        QJsonDocument doc = QJsonDocument::fromJson(json, &err);
        if (err.error != QJsonParseError::NoError)
            return;
        if (!doc.isArray())
            return;

        QJsonArray cities = doc.array();
        for (int i = 0; i < cities.size(); ++i)
        {
            QString city = cities[i].toObject().value("city_name").toString();
            QString code = cities[i].toObject().value("city_code").toString();
            if (!code.isEmpty())
                cityMap1.insert(city, code);
        }
    }
};

//QMap<QString, QString> weatherTool::cityMap1 = {};

#endif // WEATHERTOOL_H
