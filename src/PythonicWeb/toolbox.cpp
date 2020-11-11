/*
 * This file is part of Pythonic.

 * Pythonic is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * Pythonic is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Pythonic. If not, see <https://www.gnu.org/licenses/>
 */

#include "toolbox.h"

Toolbox::Toolbox(QWidget *parent) : QWidget(parent)
{
    qCDebug(logC, "called");

    //addTab(&m_basicTools, tr("Basic tools"));
    setLayout(&m_layout);
    m_layout.setContentsMargins(0, 0, 0, 0);
    m_layout.setSizeConstraint(QLayout::SetMinimumSize);
    m_layout.addWidget(&m_BasicOperation);
    /* Signals & Slots */

    /*
    connect(this, &Toolbox::updateCurrentWorkingArea,
            &m_basicTools, &BasicTools::setCurrentWorkingArea);
    */
}
