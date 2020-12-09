#include "Plush.hpp"

namespace APC
{
	Plush::Plush(): _coord(new Coordinator), _thread(nullptr)
	{
	}
	Plush::~Plush()
	{
		delete this->_coord;
		delete this->_thread;
	}
	void Plush::start()
	{
		this->_thread = new std::thread(&Coordinator::startStory, this->_coord, nullptr);
	}
	void Plush::hand_left(void)
	{
		this->_coord->hand_left();
	}
	void Plush::hand_right(void)
	{
		this->_coord->hand_right();
	}
	void Plush::feet_left(void)
	{
		this->_coord->feet_left();
	}
	void Plush::feet_right(void)
	{
		this->_coord->feet_right();
	}
}
