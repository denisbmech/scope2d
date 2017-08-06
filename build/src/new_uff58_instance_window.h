/*
This file is part of scope2d.

scope2d: 2-D Data Visualization and Analysis Software
Copyright (C) 2017  Deniz Bilgili

scope2d is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

scope2d is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with scope2d.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef NEW_UFF58_INSTANCE_WINDOW_H
#define NEW_UFF58_INSTANCE_WINDOW_H

#include <string>
#include <vector>

#include <QDialog>
#include <QFileDialog>
#include <QPushButton>
#include <QLineEdit>
#include <QGridLayout>
#include <QString>
#include <QStringList>
#include <QMessageBox>

#include "parent_instance.h"
#include "uff58_reader.h"


class NewUFF58InstanceWindow: public QDialog {

/*
	Window object for UFF58 data import windows. Calls UFF58 reader and packs 
	data in UFF58 instances and signals them out.
*/

public:
	NewUFF58InstanceWindow(QWidget* parent);
	
private:
	Q_OBJECT
	
	QGridLayout* m_gridLayout;
	QPushButton* m_importButton;
	QPushButton* m_browseButton;
	QLineEdit* m_fileAddressBox;
	
public slots:
	void get_file_address();
	void pack_instances();
	
signals:
	void instanceReady(ParentInstance*, QString);

};

#endif // !NEW_UFF58_INSTANCE_WINDOW_H
