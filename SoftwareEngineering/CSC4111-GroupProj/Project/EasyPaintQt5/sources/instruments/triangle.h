#pragma once

#include "abstractinstrument.h"

#include <QtCore/QObject>

/**
* @brief Rectangle instrument class.
*
*/
class Triangle : public AbstractInstrument
{
	Q_OBJECT
public:
	explicit Triangle(QObject *parent = 0);

	void mousePressEvent(QMouseEvent *event, ImageArea &imageArea);
	void mouseMoveEvent(QMouseEvent *event, ImageArea &imageArea);
	void mouseReleaseEvent(QMouseEvent *event, ImageArea &imageArea);
	void triangleShape(QPolygon &);
protected:
	void paint(ImageArea &imageArea, bool isSecondaryColor = false, bool additionalFlag = false);

	//void triangleShape(QPolygon & triangle);

};