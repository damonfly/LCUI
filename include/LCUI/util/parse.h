﻿/* ***************************************************************************
 * parse.h -- parse data from string
 *
 * Copyright (C) 2015-2017 by Liu Chao <lc-soft@live.cn>
 *
 * This file is part of the LCUI project, and may only be used, modified, and
 * distributed under the terms of the GPLv2.
 *
 * (GPLv2 is abbreviation of GNU General Public License Version 2)
 *
 * By continuing to use, modify, or distribute this file you indicate that you
 * have read the license and understand and accept it fully.
 *
 * The LCUI project is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GPL v2 for more details.
 *
 * You should have received a copy of the GPLv2 along with this file. It is
 * usually in the LICENSE.TXT file, If not, see <http://www.gnu.org/licenses/>.
 * ***************************************************************************/

/* ****************************************************************************
 * parse.h -- 字符串中的书局解析
 *
 * 版权所有 (C) 2015-2017 归属于 刘超 <lc-soft@live.cn>
 *
 * 这个文件是LCUI项目的一部分，并且只可以根据GPLv2许可协议来使用、更改和发布。
 *
 * (GPLv2 是 GNU通用公共许可证第二版 的英文缩写)
 *
 * 继续使用、修改或发布本文件，表明您已经阅读并完全理解和接受这个许可协议。
 *
 * LCUI 项目是基于使用目的而加以散布的，但不负任何担保责任，甚至没有适销性或特
 * 定用途的隐含担保，详情请参照GPLv2许可协议。
 *
 * 您应已收到附随于本文件的GPLv2许可协议的副本，它通常在LICENSE.TXT文件中，如果
 * 没有，请查看：<http://www.gnu.org/licenses/>.
 * ***************************************************************************/

#ifndef LCUI_UTIL_PARSE_H
#define LCUI_UTIL_PARSE_H

LCUI_BEGIN_HEADER

/** 从字符串中解析出数字，支持的单位：点(pt)、像素(px)、百分比(%) */
LCUI_API LCUI_BOOL ParseNumber( LCUI_Style var, const char *str );

LCUI_API LCUI_BOOL ParseRGB( LCUI_Style var, const char *str );

LCUI_API LCUI_BOOL ParseRGBA( LCUI_Style var, const char *str );

/** 从字符串中解析出色彩值，支持格式：#fff、#ffffff, rgba(R,G,B,A)、rgb(R,G,B) */
LCUI_API LCUI_BOOL ParseColor( LCUI_Style var, const char *str );

/** 解析资源路径 */
LCUI_BOOL ParseUrl( LCUI_Style s, const char *str, const char *dirname );

LCUI_BOOL ParseFontWeight( const char *str, int *weight );

LCUI_BOOL ParseFontStyle( const char *str, int *style );

LCUI_END_HEADER

#endif
