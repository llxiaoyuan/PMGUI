/*
Author: CSlime
Github: https://github.com/cs1ime
*/

#pragma once
typedef int PmCol;
#define PM_RGBA(r,g,b,a)((PmCol)(int)(((((a) & 0xff) << 24) | (((b) & 0xff) << 16) | (((g) & 0xff) << 8) | ((r) & 0xff))))
#define PM_ARGB(a,r,g,b)(PM_RGBA(r,g,b,a))
#define PM_XRGB(r,g,b)(PM_RGBA(r,g,b,255))
#define PM_RGB(a,r,g,b)(PM_RGBA(r,g,b,255))

#define PM_RED (PM_XRGB(255, 0, 0))
#define PM_GREEN (PM_XRGB(0, 255, 0))
#define PM_BLUE (PM_XRGB(0, 0, 255))
#define PM_GOLD (PM_XRGB(255, 255, 0))
#define PM_YELLOW (PM_XRGB(255, 255, 0))
#define PM_PURPLE (PM_XRGB(255, 0, 255))
#define PM_WHITE (PM_XRGB(255, 255, 255))
#define PM_BLACK (PM_XRGB(0, 0, 0))
