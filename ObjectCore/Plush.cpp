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
		this->_coord->hand__left();
	}
	void Plush::hand_right(void)
	{
		this->_coord->hand__right();
	}
	void Plush::feet_left(void)
	{
		this->_coord->feet__left();
	}
	void Plush::feet_right(void)
	{
		this->_coord->feet__right();
	}
}
