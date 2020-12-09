#include "Coordinator.hpp"
#include "story.hpp"

#include "pch.h"

namespace APC {

		void Coordinator::startStory(story_t *story)
		{
			/*_curr = story->startPoint;
			_input = none;
			Sound _sound("/text.ogg");
			_sound.play();
			while (_sound.isPlaying());
			_takeInput = true;
			for (int i = 0; i < strlen(INPUTNAME); i++) {
				if (_input != none)
					break;
				if (node[_input].takeablePath) {
					_sound.setSound(path + "/" + INPUT_NAME[i] + ".ogg");
					_sound.play();
					while (_sound.isPlaying());
				}
			}
			for (bool done = false; !done;) {
				while (_input == none);
				if (node[_input].takeablePath)
					done = true;
			}
			_takeInput = false;*/
		}

        void Coordinator::makeChoice(inputName_t input_name)
        {
            if (_takeInput)
                  _input = input_name;
        }

		void Coordinator::hand_left()
        {
            makeChoice(APC::hand_left);
        }

		void Coordinator::hand_right()
        {
            makeChoice(APC::hand_right);
        }

		void Coordinator::feet_left()
        {
            makeChoice(APC::feet_left);
        }

		void Coordinator::feet_right()
        {
            makeChoice(APC::feet_right);
        }

}
