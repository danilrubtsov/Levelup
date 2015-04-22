#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;//основное  окно программы
    w.show();//показываем окно

    return a.exec();//запуск цикла обработки событий
}
