/**
 * Classe d'affichage du programme
 */

#ifndef __DISPLAY_H__
#define	__DISPLAY_H__

#include <QtGui/QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QTextCodec>
#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QList>

class DisplayApp : public QMainWindow {
    Q_OBJECT
    
    private:
        QWidget* configuration;
        
    public:
        DisplayApp();
        ~DisplayApp();
};

#endif