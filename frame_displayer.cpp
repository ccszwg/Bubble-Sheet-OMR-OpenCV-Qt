#include "frame_displayer.h"

#include <QDebug>
#include <QMouseEvent>
#include <QCursor>

frame_displayer::frame_displayer(QWidget * parent) : QLabel(parent)
{
    _ui = parent;
    _rubberBand = new QRubberBand(QRubberBand::Rectangle, this);
    this->setMouseTracking(true);
}

void frame_displayer::mousePressEvent(QMouseEvent *event)
// https://stackoverflow.com/questions/16527248/qrubberband-on-a-definite-label
{
    _lastClickedBtn = event->button();
    if (_lastClickedBtn == Qt::LeftButton)
    {
        QPalette pal;
        pal.setBrush(QPalette::Highlight, QBrush(Qt::green));
        _rubberBand->setPalette(pal);

        _mouseClickPoint = event->pos();
        _rubberBand->setGeometry(QRect(_mouseClickPoint, _mouseClickPoint));
        _rubberBand->show();
    }
    else if (_lastClickedBtn == Qt::RightButton)
    {
        QPalette pal;
        pal.setBrush(QPalette::Highlight, QBrush(Qt::red));
        _rubberBand->setPalette(pal);

        _mouseClickPoint = event->pos();
        _rubberBand->setGeometry(QRect(_mouseClickPoint, _mouseClickPoint));
        _rubberBand->show();
    }
}

void frame_displayer::mouseMoveEvent(QMouseEvent *event)
{
    if(_rubberBand != nullptr)
    {
        QPoint mouseCurrentPoint = event->pos();
        emit mouseMoved(mouseCurrentPoint.x(), mouseCurrentPoint.y());
        if (_lastClickedBtn == Qt::LeftButton)
        {
            auto clamp_rect = rect();
            mouseCurrentPoint.rx() = std::min(clamp_rect.right(), std::max(clamp_rect.left(), mouseCurrentPoint.x()));
            mouseCurrentPoint.ry() = std::min(clamp_rect.bottom(), std::max(clamp_rect.top(), mouseCurrentPoint.y()));
            _rubberBand->setGeometry(QRect(_mouseClickPoint, mouseCurrentPoint).normalized());
        }
        if (_lastClickedBtn == Qt::RightButton)
        {
            auto clamp_rect = rect();
            mouseCurrentPoint.rx() = std::min(clamp_rect.right(), std::max(clamp_rect.left(), mouseCurrentPoint.x()));
            mouseCurrentPoint.ry() = std::min(clamp_rect.bottom(), std::max(clamp_rect.top(), mouseCurrentPoint.y()));
            _rubberBand->setGeometry(QRect(_mouseClickPoint, mouseCurrentPoint).normalized());
        }
    }
}

void frame_displayer::mouseReleaseEvent(QMouseEvent *event)
{
    _mouseClickPoint = QPoint();
    _lastClickedBtn = Qt::MidButton;
    if(_rubberBand != nullptr)
    {
        _rubberBand->hide();
        _rubberBand->clearMask();
    }
}

void frame_displayer::leaveEvent(QEvent * event)
{
    emit mouseLeave();
}

void frame_displayer::enterEvent(QEvent * event)
{
    emit mouseEnter();
}
