#ifndef COMMANDLIST_H
#define COMMANDLIST_H


#include <QObject>


class CommandList : public QObject
{
    Q_OBJECT

public:
    explicit CommandList(QObject *parent = nullptr);

};

#endif // COMMANDLIST_H
