#include "pch.h"

#include <sstream>
#include <string>

#include "Coordinator.hpp"
#include "story.hpp"

static int arrlen(const char * const *arr)
{
    int ctr = 0;

    for (int i = 0; arr && arr[i]; i++, ctr++);
    return ctr;
}

namespace APC {

    void Coordinator::startStory(story_t *story)
    {
        _curr = &story->startPoint;
        _input = NONE;
        //Sound _sound(/*path +*/ "/text.ogg");
        //_sound.play();
        //while (_sound.isPlaying());
        _takeInput = true;
        for (int i = 0; i < arrlen(INPUTNAME); i++) {
            if (_input != NONE)
                break;
            if (_curr->node[_input].tp) {
                //_sound.setSound(/*path +*/ "/" + INPUTNAME[i] + ".ogg");
                //_sound.play();
                //while (_sound.isPlaying());
            }
        }
        for (bool done = false; !done;) {
            while (_input == NONE);
            if (_curr->node[_input].tp)
                done = true;
        }
        _takeInput = false;
    }

        void Coordinator::makeChoice(inputName_t input_name)
        {
            if (_takeInput)
                  _input = input_name;
        }

		void Coordinator::hand_left()
        {
            makeChoice(APC::HAND_LEFT);
        }

		void Coordinator::hand_right()
        {
            makeChoice(APC::HAND_RIGHT);
        }

		void Coordinator::feet_left()
        {
            makeChoice(APC::FEET_LEFT);
        }

		void Coordinator::feet_right()
        {
            makeChoice(APC::FEET_RIGHT);
        }

		void Coordinator::doTp(std::string path)
		{
			std::string tmp;
			story_node_t *currsor = &this->_story->startPoint;
			std::stringstream spath(path);
			std::vector<std::string> choices;
			
			while (std::getline(spath, tmp, '.'))
				choices.push_back(tmp);
			for (auto &pathSeg : choices) {
				for (auto &choice : currsor->node) {
					if (choice.inputName == pathSeg) {
						currsor = &choice.next;
						break;
					}
				}
			}
		}

}
