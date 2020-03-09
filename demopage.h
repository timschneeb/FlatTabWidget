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
#ifndef DEMOPAGE_H
#define DEMOPAGE_H

#include <QWidget>

namespace Ui {
class demopage;
}
/*!
    \class demopage

    \brief The demopage class provides a simple randomized widget used for testing
*/
class DemoPage : public QWidget
{
    Q_OBJECT

public:
    explicit DemoPage(QString text, QWidget *parent = nullptr);
    ~DemoPage();

private:
    Ui::demopage *ui;
};

#endif // DEMOPAGE_H
