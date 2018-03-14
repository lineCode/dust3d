#ifndef THEME_H
#define THEME_H
#include <QColor>
#include <QString>

class Theme
{
public:
    static QColor skeletonMasterNodeBorderColor;
    static QColor skeletonMasterNodeBorderHighlightColor;
    static QColor skeletonMasterNodeFillColor;
    static int skeletonMasterNodeBorderSize;
    static QColor skeletonSlaveNodeBorderColor;
    static QColor skeletonSlaveNodeBorderHighlightColor;
    static QColor skeletonSlaveNodeFillColor;
    static int skeletonSlaveNodeBorderSize;
    static QString tabButtonSelectedStylesheet;
    static QString tabButtonStylesheet;
};

#endif
