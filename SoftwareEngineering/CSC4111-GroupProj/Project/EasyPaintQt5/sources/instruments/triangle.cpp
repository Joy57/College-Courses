#include "triangle.h"
#include "../imagearea.h"
#include "../datasingleton.h"

#include <QPen>
#include <QPainter>

Triangle::Triangle(QObject *parent) :
	AbstractInstrument(parent)
{
}

void Triangle::mousePressEvent(QMouseEvent *event, ImageArea &imageArea)
{
	if (event->button() == Qt::LeftButton || event->button() == Qt::RightButton)
	{
		mStartPoint = mEndPoint = event->pos();
		imageArea.setIsPaint(true);
		mImageCopy = *imageArea.getImage();
		makeUndoCommand(imageArea);
	}
}

void Triangle::mouseMoveEvent(QMouseEvent *event, ImageArea &imageArea)
{
	if (imageArea.isPaint())
	{
		mEndPoint = event->pos();
		imageArea.setImage(mImageCopy);
		if (event->buttons() & Qt::LeftButton)
		{
			paint(imageArea, false);
		}
		else if (event->buttons() & Qt::RightButton)
		{
			paint(imageArea, true);
		}
	}
}

void Triangle::mouseReleaseEvent(QMouseEvent *event, ImageArea &imageArea)
{
	if (imageArea.isPaint())
	{
		imageArea.setImage(mImageCopy);
		if (event->button() == Qt::LeftButton)
		{
			paint(imageArea, false);
		}
		else if (event->button() == Qt::RightButton)
		{
			paint(imageArea, true);
		}
		imageArea.setIsPaint(false);
	}
}

void Triangle::paint(ImageArea &imageArea, bool isSecondaryColor, bool)
{
	QPainter painter(imageArea.getImage());
	painter.setPen(QPen(DataSingleton::Instance()->getPrimaryColor(),
		DataSingleton::Instance()->getPenSize() * imageArea.getZoomFactor(),
		Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
	if (isSecondaryColor)
	{
		painter.setBrush(QBrush(DataSingleton::Instance()->getSecondaryColor()));
	}
	if (mStartPoint != mEndPoint)
	{
		//new shape triangle
		QPolygon triangle;
		triangleShape(triangle);

		/*
		Container for painting operations, enabling graphical shapes to be constructed and reused
		*/
		QPainterPath newPath;

		newPath.addPolygon(triangle);

		/*
		Draws the given painter path using the current pen for outline and the current brush for filling.
		*/
		painter.drawPath(newPath);
		painter.strokePath(newPath,QPen(DataSingleton::Instance()->getPrimaryColor(),
			DataSingleton::Instance()->getPenSize() * imageArea.getZoomFactor(),
			Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));


	}
	imageArea.setEdited(true);

	painter.end();
	imageArea.update();
}
void Triangle::triangleShape(QPolygon &triangle) {

	//easiest way to add points is to use QVector's streaming operator
	triangle << QPoint(mStartPoint.x(), mEndPoint.x());
	triangle << QPoint(mEndPoint.x(), mEndPoint.y());
	triangle << QPoint(mEndPoint.y(), mStartPoint.x());
	triangle << QPoint(mStartPoint.x(), mEndPoint.x());	

}
