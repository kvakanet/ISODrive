#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include <QObject>
#include <QDebug>
#include <QDir>
#include <QStandardPaths>


class FileManager : public QObject
{
    Q_OBJECT
public:
    FileManager(QObject *parent = 0);
    Q_INVOKABLE QStringList getISOFiles();

signals:

public slots:

};

#endif // FILEMANAGER_H
