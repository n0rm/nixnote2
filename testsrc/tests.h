#ifndef NIXNOTE2_TESTS_H
#define NIXNOTE2_TESTS_H

#include <QObject>

class Tests: public QObject
{
    Q_OBJECT

private:
    QString formatToEnml(QString source);
    QString addEnmlEnvelope(QString source, QString resources = QString(), QString bodyAttrs = QString());

public:
    Q_INVOKABLE explicit Tests(QObject *parent=Q_NULLPTR);
    virtual ~Tests() {};

// comment out to debug the last test
private slots:
    void enmlBasicTest();
    void enmlTidyTest();
    void enmlNixnoteTodoTest();
    void enmlNixnoteImageTest();

private slots:
    void enmlNixnoteLinkTest();
    void enmlNixnoteObjectTest();
};

#endif // NIXNOTE2_TESTS_H
