#ifndef ROUNDRECTANGLEINSTRUMENT_H
#define ROUNDRECTANGLEINSTRUMENT_H

#include "abstractinstrument.h"

#include <QtCore/QObject>

/**
* @brief Round Rectangle instrument class.
*
*/
class RoundRectangleInstrument : public AbstractInstrument
{
	Q_OBJECT
public:
	explicit RoundRectangleInstrument(QObject *parent = 0);

	void mousePressEvent(QMouseEvent *event, ImageArea &imageArea);
	void mouseMoveEvent(QMouseEvent *event, ImageArea &imageArea);
	void mouseReleaseEvent(QMouseEvent *event, ImageArea &imageArea);

protected:
	void paint(ImageArea &imageArea, bool isSecondaryColor = false, bool additionalFlag = false);

};

#endif // ROUNDRECTANGLEINSTRUMENT_H
