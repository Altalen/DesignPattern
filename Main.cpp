#include "DisplayApp.h"

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);
    
    DisplayApp da;
    da.show();

    return app.exec();
}