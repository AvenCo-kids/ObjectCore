#include "startPoint.h"
#include "pch.h"

namespace APC {
	Plush *startPlush(void) {
		Plush *plush = new Plush;

		plush->start();
		return (plush);
	}
	void hand_left(Plush *pPlush)
	{
		pPlush->hand_left();
	}
	void hand_right(Plush *pPlush)
	{
		pPlush->hand_right();
	}
	void feet_left(Plush *pPlush)
	{
		pPlush->feet_left();
	}
	void feet_right(Plush *pPlush)
	{
		pPlush->feet_right();
	}
}