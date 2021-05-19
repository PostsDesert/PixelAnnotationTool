/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen_Image;
    QAction *actionQuit;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionClear;
    QAction *actionSave;
    QAction *actionSave_config_file;
    QAction *actionOpen_config_file;
    QAction *actionOpenDir;
    QAction *actionAbout;
    QAction *actionOpen_jsq;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuTool;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QDockWidget *dock_label;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QDoubleSpinBox *spinbox_alpha;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QDoubleSpinBox *spinbox_scale;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QSpinBox *spinbox_pen_size;
    QListWidget *list_label;
    QCheckBox *checkbox_border_ws;
    QCheckBox *checkbox_manuel_mask;
    QCheckBox *checkbox_watershed_mask;
    QPushButton *button_watershed;
    QDockWidget *dockWidget_3;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_3;
    QTreeWidget *tree_widget_img;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1511, 967);
        MainWindow->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MainWindow->setAnimated(true);
        MainWindow->setDocumentMode(true);
        MainWindow->setDockNestingEnabled(true);
        MainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::ForceTabbedDocks|QMainWindow::GroupedDragging|QMainWindow::VerticalTabs);
        actionOpen_Image = new QAction(MainWindow);
        actionOpen_Image->setObjectName(QString::fromUtf8("actionOpen_Image"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        actionClear = new QAction(MainWindow);
        actionClear->setObjectName(QString::fromUtf8("actionClear"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_config_file = new QAction(MainWindow);
        actionSave_config_file->setObjectName(QString::fromUtf8("actionSave_config_file"));
        actionOpen_config_file = new QAction(MainWindow);
        actionOpen_config_file->setObjectName(QString::fromUtf8("actionOpen_config_file"));
        actionOpenDir = new QAction(MainWindow);
        actionOpenDir->setObjectName(QString::fromUtf8("actionOpenDir"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionOpen_jsq = new QAction(MainWindow);
        actionOpen_jsq->setObjectName(QString::fromUtf8("actionOpen_jsq"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setSpacing(2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(2, 2, 2, 2);
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideLeft);
        tabWidget->setUsesScrollButtons(false);
        tabWidget->setDocumentMode(false);
        tabWidget->setTabsClosable(true);
        tabWidget->setMovable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1511, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuTool = new QMenu(menubar);
        menuTool->setObjectName(QString::fromUtf8("menuTool"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        dock_label = new QDockWidget(MainWindow);
        dock_label->setObjectName(QString::fromUtf8("dock_label"));
        dock_label->setFeatures(QDockWidget::DockWidgetFloatable|QDockWidget::DockWidgetMovable);
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_2 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_2->setSpacing(2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(2, 2, 2, 2);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(dockWidgetContents);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        spinbox_alpha = new QDoubleSpinBox(dockWidgetContents);
        spinbox_alpha->setObjectName(QString::fromUtf8("spinbox_alpha"));
        spinbox_alpha->setMaximum(1.000000000000000);
        spinbox_alpha->setSingleStep(0.010000000000000);
        spinbox_alpha->setValue(0.400000000000000);

        horizontalLayout->addWidget(spinbox_alpha);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        spinbox_scale = new QDoubleSpinBox(dockWidgetContents);
        spinbox_scale->setObjectName(QString::fromUtf8("spinbox_scale"));
        spinbox_scale->setMinimum(0.050000000000000);
        spinbox_scale->setMaximum(8.000000000000000);
        spinbox_scale->setSingleStep(0.050000000000000);
        spinbox_scale->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(spinbox_scale);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(dockWidgetContents);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        spinbox_pen_size = new QSpinBox(dockWidgetContents);
        spinbox_pen_size->setObjectName(QString::fromUtf8("spinbox_pen_size"));
        spinbox_pen_size->setMinimum(0);
        spinbox_pen_size->setSingleStep(5);
        spinbox_pen_size->setValue(30);

        horizontalLayout_3->addWidget(spinbox_pen_size);


        verticalLayout->addLayout(horizontalLayout_3);

        list_label = new QListWidget(dockWidgetContents);
        list_label->setObjectName(QString::fromUtf8("list_label"));

        verticalLayout->addWidget(list_label);

        checkbox_border_ws = new QCheckBox(dockWidgetContents);
        checkbox_border_ws->setObjectName(QString::fromUtf8("checkbox_border_ws"));

        verticalLayout->addWidget(checkbox_border_ws);

        checkbox_manuel_mask = new QCheckBox(dockWidgetContents);
        checkbox_manuel_mask->setObjectName(QString::fromUtf8("checkbox_manuel_mask"));
        checkbox_manuel_mask->setCheckable(true);
        checkbox_manuel_mask->setChecked(true);

        verticalLayout->addWidget(checkbox_manuel_mask);

        checkbox_watershed_mask = new QCheckBox(dockWidgetContents);
        checkbox_watershed_mask->setObjectName(QString::fromUtf8("checkbox_watershed_mask"));

        verticalLayout->addWidget(checkbox_watershed_mask);

        button_watershed = new QPushButton(dockWidgetContents);
        button_watershed->setObjectName(QString::fromUtf8("button_watershed"));

        verticalLayout->addWidget(button_watershed);


        verticalLayout_2->addLayout(verticalLayout);

        dock_label->setWidget(dockWidgetContents);
        MainWindow->addDockWidget(Qt::LeftDockWidgetArea, dock_label);
        dockWidget_3 = new QDockWidget(MainWindow);
        dockWidget_3->setObjectName(QString::fromUtf8("dockWidget_3"));
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_3 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_3->setSpacing(2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        tree_widget_img = new QTreeWidget(dockWidgetContents_3);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        tree_widget_img->setHeaderItem(__qtreewidgetitem);
        tree_widget_img->setObjectName(QString::fromUtf8("tree_widget_img"));

        verticalLayout_3->addWidget(tree_widget_img);

        dockWidget_3->setWidget(dockWidgetContents_3);
        MainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_3);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuTool->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpenDir);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuTool->addAction(actionOpen_config_file);
        menuTool->addAction(actionSave_config_file);
        menuTool->addAction(actionClear);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(actionQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "PixelAnnotationTool", nullptr));
        actionOpen_Image->setText(QCoreApplication::translate("MainWindow", "Open image", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Image->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
        actionRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
        actionClear->setText(QCoreApplication::translate("MainWindow", "Clear mask", nullptr));
        actionSave->setText(QCoreApplication::translate("MainWindow", "Save mask", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_config_file->setText(QCoreApplication::translate("MainWindow", "Save config file", nullptr));
        actionOpen_config_file->setText(QCoreApplication::translate("MainWindow", "Open config file", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_config_file->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpenDir->setText(QCoreApplication::translate("MainWindow", "Open directory", nullptr));
#if QT_CONFIG(shortcut)
        actionOpenDir->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        actionOpen_jsq->setText(QCoreApplication::translate("MainWindow", "Open JSQ", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuTool->setTitle(QCoreApplication::translate("MainWindow", "Tool", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Alpha Mask :", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Resize factor : ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Circle size :", nullptr));
        checkbox_border_ws->setText(QCoreApplication::translate("MainWindow", "keep border provide by the watershed", nullptr));
        checkbox_manuel_mask->setText(QCoreApplication::translate("MainWindow", "Manuel Mask", nullptr));
        checkbox_watershed_mask->setText(QCoreApplication::translate("MainWindow", "Watershed Mask", nullptr));
        button_watershed->setText(QCoreApplication::translate("MainWindow", "Watershed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
