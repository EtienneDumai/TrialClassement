#include "database.h"
#include <QSqlError>
Database::Database() {

    if (openDatabase()) {
        qDebug() << "Ouverture de la BD réussie";
    } else {
        qDebug() << "Ouverture ratée";
        qDebug() << _mydb.lastError();
    }
}

Database::~Database()
{
    // Fermer la base de données et supprimer le pointeur dans le destructeur
    closeDatabase();
}
bool Database::openDatabase()
{
    // Définir les paramètres de connexion à la base de données
    _mydb = QSqlDatabase::addDatabase(CONNECT_TYPE);
    _mydb.setDatabaseName(DATABASE_NAME);
    if (!_mydb.open()) {
        qDebug() << "Impossible d'ouvrir la base de données:" ;
        return false;
    }

    qDebug() << "Connexion à la base de données réussie.";
    return true;
}

bool Database::closeDatabase()
{
    if (_mydb.isOpen()) {
        _mydb.close();
        QSqlDatabase::removeDatabase(CONNECT_TYPE);
        return true;
    }
    return false;
}
