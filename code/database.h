#ifndef DATABASE_H
#define DATABASE_H

#include <QSqlDatabase>
#include <QDebug>

#define DATABASE_NAME "trial"
#define CONNECT_TYPE "QODBC"
class Database
{
public:
    Database();
    ~Database();
    //méthodes relatives à la BD
    bool openDatabase();
    bool closeDatabase();
private:
    QSqlDatabase _mydb;
};

#endif // DATABASE_H
