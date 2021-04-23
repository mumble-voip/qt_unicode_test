#include "MainWindow.h"
#include "ui_MainWindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    m_ui(new Ui::MainWindow)
{
	m_ui->setupUi(this);

    const auto str = QString::fromUtf8("ᎭᎪᎢᎬᎭᎾᎷ");
    qDebug() << "String:" << str;

    const QFontMetrics fm(font());
    for (const auto ch : str) {
        qDebug() << "Character" << ch << "in font:" << fm.inFont(ch);
    }

    m_ui->label->setText(str);
    m_ui->textBox->setText(str);
}

MainWindow::~MainWindow() = default;
