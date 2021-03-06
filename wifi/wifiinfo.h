#ifndef WIFIINFO_H
#define WIFIINFO_H

#include <QObject>

class WifiInfo : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName)
    //Q_PROPERTY(QString name READ name WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(int strength READ getStrength WRITE setStrength)
    //Q_PROPERTY(int strength READ strength WRITE setstrength NOTIFY strengthChanged)

public:
    explicit WifiInfo(QString name, int strength, QObject *parent = 0);

    Q_INVOKABLE QString getName();
    Q_INVOKABLE int getStrength();
    Q_INVOKABLE void setName(QString n);
    Q_INVOKABLE void setStrength(int s);


signals:

public slots:

private:
    QString name;
    int strength;
};

#endif // WIFIINFO_H
