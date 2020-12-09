#pragma once
#include "Plush.hpp"

namespace APC
{
	extern "C" __declspec(dllexport) Plush *startPlush();
	extern "C" __declspec(dllexport) void hand_left(Plush *pPlush);
	extern "C" __declspec(dllexport) void hand_right(Plush *pPlush);
	extern "C" __declspec(dllexport) void feet_left(Plush *pPlush);
	extern "C" __declspec(dllexport) void feet_right(Plush *pPlush);
}