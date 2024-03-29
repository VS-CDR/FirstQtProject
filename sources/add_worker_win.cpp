#include "../headers/add_worker_win.h"
#include "ui_add_worker_win.h"
#include "../headers/buffer.h"

AddWorkerWin::AddWorkerWin(QWidget* parent) :
    QDialog(parent),
    ui(new Ui::AddWorkerWin) {
  ui->setupUi(this);
}

AddWorkerWin::~AddWorkerWin() {
  delete ui;
}

void AddWorkerWin::AddWorkerClicked() {
  bf.age = ui->Year->text();
  bf.full_name = ui->FIO->text();
  bf.salary = ui->ZP->text();
  this->close();
}

