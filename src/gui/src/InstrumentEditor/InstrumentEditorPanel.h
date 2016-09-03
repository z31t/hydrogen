/*
 * Hydrogen
 * Copyright(c) 2002-2008 by Alex >Comix< Cominu [comix@users.sourceforge.net]
 *
 * http://www.hydrogen-music.org
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY, without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef INSTRUMENT_EDITOR_PANEL_H
#define INSTRUMENT_EDITOR_PANEL_H

#include <QtGui>
#if QT_VERSION >= 0x050000
#  include <QtWidgets>
#endif
#include <hydrogen/object.h>
#include "InstrumentEditor.h"

///
/// Container for the Instrument Editor (Singleton).
///
class InstrumentEditorPanel : public QWidget, private H2Core::Object
{
    H2_OBJECT
	Q_OBJECT
	public:
		static InstrumentEditorPanel* get_instance();
		~InstrumentEditorPanel();

		void notifyOfDrumkitChange();
		void selectLayer( int nLayer );
		
		int getSelectedLayer() {
			return m_pLayer;
		}

	private:
		static InstrumentEditorPanel* m_pInstance;
		InstrumentEditor* m_pInstrumentEditor;

		InstrumentEditorPanel( QWidget *pParent );
		int m_pLayer;
		
};

#endif

