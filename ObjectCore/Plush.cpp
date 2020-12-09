#include "Plush.hpp"
#include "pch.h"

namespace APC
{
	Plush::Plush(): _coord(new Coordinator), _thread(nullptr)
	{
		/*this->_story = {
			"null",
			"Nitou, le petit indien",
			{
				true,
				0,
				{},
				{}
			}
		};*/
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
