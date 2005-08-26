// -*- C++ -*-
// optionDiologWidget.h
//
// Part of KDVI - A DVI previewer for the KDE desktop environemt 
//
// (C) 2003 Stefan Kebekus
// Distributed under the GPL

#ifndef OPTIONDIALOGFONTSWIDGET_H
#define OPTIONDIALOGFONTSWIDGET_H

// Add header files alphabetically

#include "optionDialogFontsWidget_base.h"

class optionDialogFontsWidget : public optionDialogFontsWidget_base
{ 
  Q_OBJECT
    
 public:
  optionDialogFontsWidget( QWidget* parent = 0, const char* name = 0, Qt::WFlags fl = 0 );
  ~optionDialogFontsWidget();
};

#endif // OPTIONDIALOGFONTSWIDGET_H
