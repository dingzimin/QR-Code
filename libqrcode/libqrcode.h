#pragma once

#include "stdafx.h"

#ifdef LIBQRCODE_EXPORTS
#define LIBQRCODE_API __declspec(dllexport)
#else
#define LIBQRCODE_API __declspec(dllimport)
#endif

class QRCode
{
	static LIBQRCODE_API void GenerateCode();
};