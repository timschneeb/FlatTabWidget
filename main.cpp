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

#include <flattabwidget.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FlatTabWidget w;
    w.setContentsMargins(9,9,9,9);
    w.addPage("Tab 1",new DemoPage("This is the first tab!"));
    w.addPage("Tab 2",new DemoPage("This is the second tab!"));
    w.addPage("Tab 3",new DemoPage("This is the third tab!"));
    w.addPage("Tab 4",new DemoPage("This is the fourth tab!"));
    w.addPage("Tab 5",new DemoPage("This is the fifth tab!"));
    w.addPage("Extremely long title",new DemoPage("This is the sixth tab!"));
    w.addPage("Long title",new DemoPage("This is the seventh tab!"));
    w.show();


    return a.exec();
}
