#include "DisplayApp.h"

DisplayApp::DisplayApp() {
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF-8"));
    this->setWindowTitle("MEGA Interpretor");
    
    // Menu
    QMenu *fileMenu = menuBar()->addMenu("&Fichier");
//    QAction *actionNouveau = menuFichier->addAction("&Nouveau");
//    actionNouveau->setShortcut(QKeySequence("Ctrl+N"));
//    connect(actionNouveau, SIGNAL(triggered()), this, SLOT(nouveauJeu()));
    QAction *exit = fileMenu->addAction("&Quitter");
    exit->setShortcut(QKeySequence("Ctrl+Q"));
    connect(exit, SIGNAL(triggered()), qApp, SLOT(quit()));
    
    configuration = new QWidget();
    configuration->setFixedSize(600, 800);
    
    this->setCentralWidget(configuration);
}

DisplayApp::~DisplayApp() {
}