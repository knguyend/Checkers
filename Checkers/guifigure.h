#ifndef GUIFIGURE_H
#define GUIFIGURE_H

#include <QtGui>
#include <QObject>
#include <QBrush>
#include <QPainter>

#include "common.h"
#include "guisquare.h"

class GUISquare;    // kvuli kruhove zavislosti GUIFigure <> GUISquare

class GUIFigure : public QGraphicsWidget
{
    Q_OBJECT

public:
    GUIFigure(QGraphicsWidget *parent = 0);
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget);
    void setType(BoardTypes);
    QRectF boundingRect() const;
    void emitSignals(bool);


private:
    bool pressed;
    Position position;
    BoardTypes type = NONE;
    QPointF lastPosition;
    QRectF bound;
    bool emitSignalsFlag;

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);




    
//public slots:
    
};

#endif // GUIFIGURE_H
