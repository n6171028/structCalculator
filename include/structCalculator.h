#pragma once
#include <QObject>

class structCalculator : public QObject
{
    Q_OBJECT
public:
    structCalculator();
    ~structCalculator() {}

private:
    void                update();

    bool                m_bIsDecimal;
    unsigned int        m_nEnteredValue;
    unsigned int        m_nCurrentValue;
    unsigned char       m_nCurrentTypeSize;
    bool                m_bNewEntry;

signals:
    void                sendText(const QString& text);

public slots:
    void                switchDisplayType(bool bChecked);
    void                btnSelectTypePressed();
    void                btnNumPadPressed();
    void                btnClear();
    void                btnEnter();
};
