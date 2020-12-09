#include "Plush.hpp"

namespace APC {
	Plush *startPlush(void) {
		Plush *plush = new Plush;

		plush->start();
		return (plush);
	}
}