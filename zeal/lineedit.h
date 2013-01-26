/****************************************************************************
**
** Copyright (c) 2007 Trolltech ASA <info@trolltech.com>
**
** Use, modification and distribution is allowed without limitation,
** warranty, liability or support of any kind.
**
****************************************************************************/
// from http://git.forwardbias.in/?p=lineeditclearbutton.git;a=blob_plain;f=lineedit.h;hb=HEAD
#ifndef LINEEDIT_H
#define LINEEDIT_H

#include "zealsearchedit.h"

class QToolButton;

class LineEdit : public ZealSearchEdit
{
    Q_OBJECT

public:
    LineEdit(QWidget *parent = 0);

protected:
    void resizeEvent(QResizeEvent *);

private slots:
    void updateCloseButton(const QString &text);

private:
    QToolButton *clearButton;
};

#endif // LIENEDIT_H