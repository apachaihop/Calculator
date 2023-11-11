#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

  ui->setupUi(this);
}

MainWindow::~MainWindow() { delete ui; }

void MainWindow::on_pushButton_10_clicked() {
  ui->textBrowser->setText(str + "1");
  str += "1";
}

void MainWindow::on_pushButton_11_clicked() {
  ui->textBrowser->setText(str + "2");
  str += "2";
}

void MainWindow::on_pushButton_12_clicked() {
  ui->textBrowser->setText(str + "3");
  str += "3";
}

void MainWindow::on_pushButton_7_clicked() {
  ui->textBrowser->setText(str + "4");
  str += "4";
}

void MainWindow::on_pushButton_8_clicked() {
  ui->textBrowser->setText(str + "5");
  str += "5";
}

void MainWindow::on_pushButton_9_clicked() {
  ui->textBrowser->setText(str + "6");
  str += "6";
}

void MainWindow::on_pushButton_4_clicked() {
  ui->textBrowser->setText(str + "7");
  str += "7";
}

void MainWindow::on_pushButton_5_clicked() {
  ui->textBrowser->setText(str + "8");
  str += "8";
}

void MainWindow::on_pushButton_6_clicked() {
  ui->textBrowser->setText(str + "9");
  str += "9";
}

void MainWindow::on_pushButton_18_clicked() {
  ui->textBrowser->setText(str + "0");
  str += "0";
}

void MainWindow::on_pushButton_17_clicked() {
  if (point) {
    return;
  }
  ui->textBrowser->setText(str + ".");
  str += ".";
  point = true;
}

void MainWindow::on_pushButton_3_clicked() {
  ui->textBrowser->setText(str + "%");
  str += "%";
}

void MainWindow::on_pushButton_13_clicked() {
  ui->textBrowser->setText(str + "/");
  str += "/";
  point = false;
}

void MainWindow::on_pushButton_14_clicked() {
  ui->textBrowser->setText(str + "*");
  str += "*";
  point = false;
}

void MainWindow::on_pushButton_15_clicked() {
  ui->textBrowser->setText(str + "-");
  str += "-";
  point = false;
}

void MainWindow::on_pushButton_16_clicked() {
  ui->textBrowser->setText(str + "+");
  str += "+";
  point = false;
}

void MainWindow::on_pushButton_21_clicked() {
  ui->textBrowser->setText(str + ")");
  str += ")";
  point = false;
}

void MainWindow::on_pushButton_19_clicked() {
  ui->textBrowser->setText(str + "(");
  str += "(";
  point = false;
}

void MainWindow::on_pushButton_2_clicked() {
  str.remove(str.size() - 1, str.size());
  ui->textBrowser->setText(str);
}

void MainWindow::on_pushButton_clicked() {
  str.clear();
  ui->textBrowser->setText(str);
}

void MainWindow::on_pushButton_20_clicked() {
  parser.parsing(str);
  ui->textBrowser->setText(QString::number(parser.calcul()));
  str.clear();
  parser.clear();
}
