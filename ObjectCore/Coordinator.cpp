#include "Coordinator.hpp"
#include "story.hpp"

#include "pch.h"

using namespace std;

namespace APC {

		void Coordinator::startStory(story_t *story) {}

        void Coordinator::makeChoice(inputName_t input_name)
        {
            if (_takeInput)
                  _input = input_name;
        }

		void Coordinator::hand_left(void)
        {
        }

		void Coordinator::hand_right(void)
        {
        }

		void Coordinator::feet_left(void)
        {
        }

		void Coordinator::feet_right(void)
        {
        }

}
