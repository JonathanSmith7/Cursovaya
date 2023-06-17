#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent) ,
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    CreateTables()
}

MainWindow::~MainWindow()
{
    db.close();
    delete ui;
}

void MainWndow::on_Complete_clicked()
{
    A = ut->QLineEditA->text().toInt();
    B = ut->QLineEditB->text().toInt();
    C = ut->QLineEditC->text().toInt();

    Result = (B*B) - 4 * A * C;

    QSqlQuery query(db);
    query.prepare("INSERT INTO history (id, result_history) "
                  "VALUES (NULL, ?)");
    query.addBindValue(Result);
    query.exec();


    ui->TextEditD->setText(QString::number(Result));

    if (Result > 0)
    {
        const std::string J = "Данное уравнение имеет два корня"
        ui->TextEditKoren->setText(QString::fromStdString(J));
    }
    if (Result == 0)
    {
        const std::string J = "Данное уравнение имеет один корень";
        ui->TextEditKoren->setText(QString::fromStdString(J));
    }
    if (Result < 0)
    {
        const std::string J = "Данное уравнение не имеет корней";
        ui->TextEditKoren->setText(QString::fromStdString(J));
    }
}

void MainWindow::CreateTables()
{
    db = QSqlDatabase::addDatabase( "QSQLITE" );
    db.setDatabaseName( "testqt.db" );
    if (!db.open())
    {
        qDebug() << db.lastError().text();
    }

    QSqlQuery query(db);
    query.exec(
        "CREATE TABLE History("
        "   id INT PRIMARY KEY "
        "   result_history INT"
        ")");
}
