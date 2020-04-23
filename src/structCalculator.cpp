#include "include/structCalculator.h"
#include <QString>

structCalculator::structCalculator() : 
QObject(),
m_bIsDecimal(true), 
m_nEnteredValue(0), 
m_nCurrentValue(0), 
m_nCurrentTypeSize(0), 
m_bNewEntry(true){}

void structCalculator::update()
{
    unsigned int nResult = m_nEnteredValue + m_nCurrentValue * m_nCurrentTypeSize;
    QString sValue;
    sValue.setNum(nResult, m_bIsDecimal ? 10 : 16);
    emit sendText(sValue);
}

void structCalculator::switchDisplayType(bool bChecked)
{
    if (bChecked)
    {
        QObject* obj = sender();
        m_bIsDecimal = (obj->objectName() == "btnIsDecimal");
        update();
    }
}

void structCalculator::btnSelectTypePressed()
{
    QObject* obj = sender();
    if (obj->objectName() == "btnDouble") m_nCurrentTypeSize = 8;
    else if (obj->objectName() == "btnFloat") m_nCurrentTypeSize = 4;
    else if (obj->objectName() == "btnLong") m_nCurrentTypeSize = 8;
    else if (obj->objectName() == "btnInt") m_nCurrentTypeSize = 4;
    else if (obj->objectName() == "btnShort") m_nCurrentTypeSize = 2;
    else if (obj->objectName() == "btnChar") m_nCurrentTypeSize = 1;
    m_bNewEntry = true;
    m_nCurrentValue = 1;
    update();
}

void structCalculator::btnClear()
{
    m_nEnteredValue = 0;
    m_nCurrentValue = 0;
    m_nCurrentTypeSize = 0;
    update();
}

void structCalculator::btnEnter()
{
    m_nEnteredValue += m_nCurrentValue * m_nCurrentTypeSize;
    m_nCurrentTypeSize = 0;
    m_nCurrentValue = 1;
    update();
}

void structCalculator::btnNumPadPressed()
{
    unsigned char nValue = 0;
    QObject* obj = sender();
    
    if (obj->objectName() == "btn1") nValue = 1;
    else if (obj->objectName() == "btn2") nValue = 2;
    else if (obj->objectName() == "btn3") nValue = 3;
    else if (obj->objectName() == "btn4") nValue = 4;
    else if (obj->objectName() == "btn5") nValue = 5;
    else if (obj->objectName() == "btn6") nValue = 6;
    else if (obj->objectName() == "btn7") nValue = 7;
    else if (obj->objectName() == "btn8") nValue = 8;
    else if (obj->objectName() == "btn9") nValue = 9;
    
    if (m_bNewEntry)
    {
        m_nCurrentValue = nValue;
        m_bNewEntry = false;
    }
    else
    {
        m_nCurrentValue = m_nCurrentValue * 10 + nValue;
    }
    update();
}
