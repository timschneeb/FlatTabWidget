/*
 *  This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.
    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

    ThePBone <tim.schneeberger(at)outlook.de> (c) 2020
*/

#include "demopage.h"
#include "ui_demopage.h"

#include <QTime>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QRadioButton>

DemoPage::DemoPage(QString text, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::demopage)
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    QVector<QWidget*> widgets;
    widgets.append(new QPushButton("Test Button"));
    widgets.append(new QPushButton("Click me!"));
    widgets.append(new QLineEdit("Some random input field"));
    widgets.append(new QLineEdit("Type here..."));
    widgets.append(new QCheckBox("I'm a checkbox"));
    widgets.append(new QCheckBox("Tick me!"));
    widgets.append(new QRadioButton("I'm a radiobutton"));
    widgets.append(new QRadioButton("Select me!"));

    ui->setupUi(this);
    ui->textBrowser->setText(text);
    for(int i = 0; i < 4; i++){
        this->layout()->addWidget(widgets[qrand() % widgets.size()]);
    }

}

DemoPage::~DemoPage()
{
    delete ui;
}
