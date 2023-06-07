#include <QtTest>
#include "../../server/mytcpserver-ex.h"
// add necessary includes here

class Unit_test_for_the_exam : public QObject
{
    Q_OBJECT

public:
    Unit_test_for_the_exam();
    ~Unit_test_for_the_exam();

private slots:
    void test_case1();
    void test_case2();
};

Unit_test_for_the_exam::Unit_test_for_the_exam()
{

}

Unit_test_for_the_exam::~Unit_test_for_the_exam()
{
}

void Unit_test_for_the_exam::test_case1()
{
    MyTcpServer Vlad;
    QList <int> S;
    S.append(3);
    S.append(5);
    S.append(7);
    S.append(2);
    S.append(1);
    S.append(5);
    S.append(3);
    S.append(6);
    S.append(-1);
    S.append(4);
    QCOMPARE(Vlad.Exam(S,S.size(),7),"3 5 7 2 1 5 3 6 -1 4 ");
}

void Unit_test_for_the_exam::test_case2()
{
    MyTcpServer Vlad;
    QList <int> S;
    S.append(1);
    S.append(-5);
    S.append(8);
    S.append(9);
    S.append(0);
    S.append(2);
    S.append(1);
    S.append(-7);
    S.append(-1);
    S.append(3);
    QCOMPARE(Vlad.Exam(S,S.size(),4),"1 -5 8 9 0 2 1 -7 -1 3 ");
}

QTEST_APPLESS_MAIN(Unit_test_for_the_exam)

#include "tst_unit_test_for_the_exam.moc"
