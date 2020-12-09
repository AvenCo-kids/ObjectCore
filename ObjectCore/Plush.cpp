#include "Plush.hpp"
#include "pch.h"

namespace APC
{
	Plush::Plush(): _coord(new Coordinator), _thread(nullptr)
	{
		this->_story = {
			"null",
			"Nitou, le petit indien",
			{
				true,
				0,
				{},
				{
					{
						"hand_left",
						false,
						"",
						nullptr,
						{
							true,
							0,
							{},
							{
								{
									"feet_left",
									false,
									"",
									nullptr,
									{
										true,
										0,
										{},
										{
											{
												"feet_left",
												false,
												"",
												nullptr,
												{
													true,
													0,
													{},
													{}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		};
	}
	Plush::~Plush()
	{
		delete this->_coord;
		delete this->_thread;
	}
	void Plush::start()
	{
		this->_thread = new std::thread([&](APC::story_t *story) {
			this->getCoor()->startStory(story);
		}, &this->_story);
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
	Coordinator * Plush::getCoor(void) const
	{
		return this->_coord;
	}
}
