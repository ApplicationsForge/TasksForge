#ifndef MAINWINDOWPRESENTER_H
#define MAINWINDOWPRESENTER_H

#include <QObject>

#include "models/todolistadapter.h"
#include "models/settingsmanager.h"

class MainWindowPresenter : public QObject
{
    Q_OBJECT
public:
    explicit MainWindowPresenter(QObject *parent = nullptr);
    ~MainWindowPresenter();

protected:
    SettingsManager *m_settingsManager;
    TodolistAdapter *m_todolistAdapter;

signals:
    void directoryUpdated(QString directory);
    void dataUpdated(QStringList todoList);

public slots:
    void openRepository(QString directory);
    void initializeRepository(QString directory);
    void readDirectory(QString directory);
    void parseData(QByteArray data);

    void completeTask(QString data);
    void completeTask(size_t index);
    void uncompleteTask(size_t index);
};

#endif // MAINWINDOWPRESENTER_H
