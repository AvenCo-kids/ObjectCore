#include "Coordinator.hpp"
#include "story.hpp"

#include "pch.h"

static int arrlen(const char * const *arr)
{
    int ctr = 0;

    for (int i = 0; arr && arr[i]; i++, ctr++);
    return ctr;
}

namespace APC {

    void Coordinator::startStory(story_t *story)
    {
        _curr = story->startPoint;
        _input = NONE;
        Sound _sound(/*path +*/ "/text.ogg");
        _sound.play();
        while (_sound.isPlaying());
        _takeInput = true;
        for (int i = 0; i < arrlen(INPUTNAME); i++) {
            if (_input != NONE)
                break;
            if (node[_input].takeablePath) {
                _sound.setSound(/*path +*/ "/" + INPUTNAME[i] + ".ogg");
                _sound.play();
                while (_sound.isPlaying());
            }
        }
        for (bool done = false; !done;) {
            while (_input == NONE);
            if (node[_input].takeablePath)
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
