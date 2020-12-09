#include "Coordinator.hpp"
#include "story.hpp"

#include "pch.h"

namespace APC {

		void Coordinator::startStory(story_t *story) {}

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
