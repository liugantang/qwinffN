/*  QWinFF - a qt4 gui frontend for ffmpeg
 *  Copyright (C) 2011-2013 Timothy Lin <lzh9102@gmail.com>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef ABOUTFFMPEGDIALOG_H
#define ABOUTFFMPEGDIALOG_H

#include <QDialog>

namespace Ui {
    class AboutFFmpegDialog;
}

class AboutFFmpegDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AboutFFmpegDialog(QWidget *parent = nullptr);
    ~AboutFFmpegDialog();

private:
    Ui::AboutFFmpegDialog *ui;
};

#endif // ABOUTFFMPEGDIALOG_H
