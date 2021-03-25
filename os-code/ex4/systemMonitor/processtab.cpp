#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::initProcessTab() {
    ui->taskTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->taskTable->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->taskTable->setModel(model);
    initTableModel();
//    ui->searchModeLabel->setVisible(false);
}

void MainWindow::initTableModel() {
    model->setColumnCount(COLUMN_NUM);
    model->setHeaderData(PID_COLUMN, Qt::Horizontal, "PID");
    model->setHeaderData(PPID_COLUMN, Qt::Horizontal, "PPID");
    model->setHeaderData(USER_COLUMN, Qt::Horizontal, "USER");
    model->setHeaderData(COMMAND_COLUMN, Qt::Horizontal, "NAME");
    model->setHeaderData(PRI_COLUMN, Qt::Horizontal, "PRI");
    model->setHeaderData(NI_COLUMN, Qt::Horizontal, "NI");
    model->setHeaderData(VIRT_COLUMN, Qt::Horizontal, "VIRT");
    model->setHeaderData(RES_COLUMN, Qt::Horizontal, "RES");
    model->setHeaderData(SHR_COLUMN, Qt::Horizontal, "SHR");
    model->setHeaderData(S_COLUMN, Qt::Horizontal, "S");
    model->setHeaderData(CPU_COLUMN, Qt::Horizontal, "CPU%");
    model->setHeaderData(MEM_COLUMN, Qt::Horizontal, "MEM%");
    model->setHeaderData(TIME_COLUMN, Qt::Horizontal, "TIME+");

    ui->taskTable->verticalHeader()->hide();
    ui->taskTable->horizontalHeader()->setVisible(true);
    ui->taskTable->horizontalHeader()->setDefaultAlignment(Qt::AlignLeft);
    ui->taskTable->setSortingEnabled(false);

    ui->taskTable->setColumnWidth(PID_COLUMN,60);
    ui->taskTable->setColumnWidth(PPID_COLUMN,60);
    ui->taskTable->setColumnWidth(USER_COLUMN,80);
    ui->taskTable->setColumnWidth(COMMAND_COLUMN,160);
    ui->taskTable->setColumnWidth(PRI_COLUMN,60);
    ui->taskTable->setColumnWidth(NI_COLUMN,60);
    ui->taskTable->setColumnWidth(VIRT_COLUMN,60);
    ui->taskTable->setColumnWidth(RES_COLUMN,60);
    ui->taskTable->setColumnWidth(SHR_COLUMN,60);
    ui->taskTable->setColumnWidth(S_COLUMN,30);
    ui->taskTable->setColumnWidth(CPU_COLUMN,60);
    ui->taskTable->setColumnWidth(MEM_COLUMN,60);
    ui->taskTable->setColumnWidth(TIME_COLUMN,120);
}

void MainWindow::sortTable() {
    switch (sortMethod) {
    case PID_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        break;
    case PID_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::DescendingOrder);
        break;
    case PPID_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(PPID_COLUMN, Qt::AscendingOrder);
        break;
    case PPID_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(PPID_COLUMN, Qt::DescendingOrder);
        break;
    case USER_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(USER_COLUMN, Qt::AscendingOrder);
        break;
    case USER_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(USER_COLUMN, Qt::DescendingOrder);
        break;
    case COMMAND_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(COMMAND_COLUMN, Qt::AscendingOrder);
        break;
    case COMMAND_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(COMMAND_COLUMN, Qt::DescendingOrder);
        break;
    case PRI_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(PRI_COLUMN, Qt::AscendingOrder);
        break;
    case PRI_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(PRI_COLUMN, Qt::DescendingOrder);
        break;
    case NI_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(NI_COLUMN, Qt::AscendingOrder);
        break;
    case NI_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(NI_COLUMN, Qt::DescendingOrder);
        break;
    case VIRT_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(VIRT_COLUMN, Qt::AscendingOrder);
        break;
    case VIRT_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(VIRT_COLUMN, Qt::DescendingOrder);
        break;
    case RES_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(RES_COLUMN, Qt::AscendingOrder);
        break;
    case RES_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(RES_COLUMN, Qt::DescendingOrder);
        break;
    case SHR_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(SHR_COLUMN, Qt::AscendingOrder);
        break;
    case SHR_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(SHR_COLUMN, Qt::DescendingOrder);
        break;
    case S_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(S_COLUMN, Qt::AscendingOrder);
        break;
    case S_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(S_COLUMN, Qt::DescendingOrder);
        break;
    case CPU_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(CPU_COLUMN, Qt::AscendingOrder);
        break;
    case CPU_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(CPU_COLUMN, Qt::DescendingOrder);
        break;
    case MEM_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(MEM_COLUMN, Qt::AscendingOrder);
        break;
    case MEM_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(MEM_COLUMN, Qt::DescendingOrder);
        break;
    case TIME_ASC:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(TIME_COLUMN, Qt::AscendingOrder);
        break;
    case TIME_DES:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(TIME_COLUMN, Qt::DescendingOrder);
        break;
    default:
        ui->taskTable->sortByColumn(PID_COLUMN, Qt::AscendingOrder);
        ui->taskTable->sortByColumn(S_COLUMN, Qt::AscendingOrder);
        break;
    }
}


void MainWindow::updateTaskLabel() {
    char buff[MAXLINE];
    sprintf(buff, "Tasks: %4d total, %4d running, %4d sleeping, %4d stopped, %4d zombie",
            taskTotal, taskRunning, taskSleeping, taskStopped, taskZombie);
    ui->taskDetailValue->setText(buff);
}

void MainWindow::updateTaskTable() {
//    if (searchMode && matchedTaskTotal == 0) {
//        searchMode = false;
////        ui->searchModeLabel->setVisible(false);
//    }

//    int rowCount = model->rowCount();
//    int total;
//    if (searchMode) {
//        total = matchedTaskTotal;
//    } else {
//        total = taskTotal;
//    }
//    if (rowCount < total) {
//        for (int i = rowCount; i < total; ++i) {
//            for (int j = 0; j < COLUMN_NUM; ++j) {
//                model->setItem(i, j, new TableItem);
//                model->item(i, j)->setEditable(false);
//            }
//        }
//    }
//    model->setRowCount(total);
//    int row = 0;
//    char s_virt[MAXLINE], s_res[MAXLINE], s_shr[MAXLINE], s_time[MAXLINE];
//    for (auto &taskInfo: taskInfoDict) {
//        if (taskInfo.second.valid) {
//            if (!searchMode || taskInfo.second.matched) {
//                model->item(row, PID_COLUMN)->setData(taskInfo.second.pid, Qt::DisplayRole);
//                model->item(row, PPID_COLUMN)->setData(taskInfo.second.ppid, Qt::DisplayRole);
//                model->item(row, USER_COLUMN)->setData(getpwuid(uid_t(taskInfo.second.uid))->pw_name, Qt::DisplayRole);
//                model->item(row, COMMAND_COLUMN)->setData(taskInfo.second.comm.c_str(), Qt::DisplayRole);
//                model->item(row, PRI_COLUMN)->setData(taskInfo.second.pri, Qt::DisplayRole);
//                model->item(row, NI_COLUMN)->setData(taskInfo.second.ni, Qt::DisplayRole);
//                formatSize(taskInfo.second.virt, s_virt);
//                model->item(row, VIRT_COLUMN)->setData(s_virt, Qt::DisplayRole);
//                formatSize(taskInfo.second.res, s_res);
//                model->item(row, RES_COLUMN)->setData(s_res, Qt::DisplayRole);
//                formatSize(taskInfo.second.shr, s_shr);
//                model->item(row, SHR_COLUMN)->setData(s_shr, Qt::DisplayRole);
//                model->item(row, S_COLUMN)->setData(QChar(taskInfo.second.s), Qt::DisplayRole);
//                model->item(row, CPU_COLUMN)->setData(QString::number(taskInfo.second.cpu, 'f', 1), Qt::DisplayRole);
//                model->item(row, MEM_COLUMN)->setData(QString::number(taskInfo.second.mem, 'f', 1), Qt::DisplayRole);
//                formatTime(taskInfo.second.time, s_time);
//                model->item(row, TIME_COLUMN)->setData(s_time, Qt::DisplayRole);
//                model->item(row, VIRT_COLUMN)->setData(qlonglong(taskInfo.second.virt), Qt::UserRole);
//                model->item(row, RES_COLUMN)->setData(qlonglong(taskInfo.second.res), Qt::UserRole);
//                model->item(row, SHR_COLUMN)->setData(qlonglong(taskInfo.second.shr), Qt::UserRole);
//                model->item(row, TIME_COLUMN)->setData(qlonglong(taskInfo.second.time), Qt::UserRole);
//                model->item(row, CPU_COLUMN)->setData(taskInfo.second.cpu, Qt::UserRole);
//                model->item(row, MEM_COLUMN)->setData(taskInfo.second.mem, Qt::UserRole);
//                model->item(row, S_COLUMN)->setData(statePriority.at(taskInfo.second.s), Qt::UserRole);
//                ++row;
//            }
//            taskInfo.second.valid = false;
//        }
//    }
//    if (searchMode) {
//        ui->searchModeLabel->setVisible(true);
//    }

//    sortTable();
//    currVerticalScrollValue = ui->taskTable->verticalScrollBar()->value();
//    currHorizontalScrollValue = ui->taskTable->horizontalScrollBar()->value();
//    ui->taskTable->selectRow(currSelectedRow);
//    ui->taskTable->verticalScrollBar()->setValue(currVerticalScrollValue);
//    ui->taskTable->horizontalScrollBar()->setValue(currHorizontalScrollValue);

}

void MainWindow::formatCommand(char *src, char *dest) {
    int cnt = 0, i = 0;
    while (cnt != 2 && i < MAXLINE) {
        if (*src == 0) {
            ++cnt;
            *dest++ = ' ';
        } else {
            cnt = 0;
            *dest++ = *src++;
        }
        ++i;
    }
    *(dest-2) = 0;
}

void MainWindow::formatSize(unsigned long l_size, char *s_size) {
    if (l_size < 10000) {
        if (l_size == 0) {
            strcpy(s_size, "0");
        } else {
            sprintf(s_size, "%luK", l_size);
        }
    } else {
        l_size >>= 10;
        if (l_size < 10000) {
            sprintf(s_size, "%luM", l_size);
        } else {
            l_size >>= 10;
            sprintf(s_size, "%luG", l_size);
        }
    }
}

void MainWindow::formatTime(unsigned long l_time, char *s_time) {
    unsigned long m;
    float s;
    m = l_time/6000;
    s = float(l_time)/100 - m*60;
    if (m >= 60) {
        unsigned long h = m/60;
        m = m%60;
        sprintf(s_time, "%ldh%02ld:%d", h, m, int(s));
    } else {
        sprintf(s_time, "%ld:%05.2f", m, s);
    }
}
