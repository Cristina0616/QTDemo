#include <QString>
#include <QJsonObject>
#include <QJsonDocument>
#include <QFile>
#include <QFileInfo>
#include <qcryptographichash.h>
#include <iostream>
#include <string>
#include <QDir>

// 公共方法存放
namespace Utils {

//1.字符串处理部分
bool StringJudgeAccount(QString string_); //字符串判断用户账号
bool StringJudgePassword(QString string_); //字符串判断用户密码
bool isPureNums(QString num_); // 判断是否为纯数字
QString QJsonObjectToQString(QJsonObject& json_object); //QJsonObject转QString
bool  QStringToQJsonObject(QString& str_,QJsonObject&json_); //QString转QJsonObject
QByteArray QStringToQByteArray(QString str_); // QString 转 QByteArray
QString QByteArrayToQString(QByteArray array_); //QByteArray 转 QString

//2.文件处理部分
QString GetFileMd5(QString &file_name); //获取文件md5值
bool IsFileExist(QString filename);//判断是否文件存在
bool CreateDirectory_(QString& folder_path); //创建文件夹
bool CreateFile_(QString& file_name); // 创建文件
bool DeleteDirectory_(QString& folder_path);  // 删除文件夹
bool DeleteFile_(QString& file_name); //删除文件

//3.密码加密
QString Md5Code(QString str_); //Md5加密

//4.时间相关
QString GetCurrentDay(); //获取当前日期，返回数据：yyyy_month_day
QString GetCurrentDateTime(); //获取当前时间 返回数据格式 yyyy_month_day_h_min_s

//5.创建桌面快捷方式
bool CreateDesktopShortcut(QString file_name,QString lnk_name);

}
