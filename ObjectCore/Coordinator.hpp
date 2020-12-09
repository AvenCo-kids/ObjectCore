#pragma once

#include "story.hpp"

namespace APC {

    class Coordinator {

		public:

			Coordinator() = default;
			~Coordinator() = default;

			void startStory(story_t *story);
			void makeChoice(inputName_t input) noexcept;

			void hand_left();
			void hand_right();
			void feet_left();
			void feet_right();

		private:
	
			story_t  *_story;
			story_node_t *_curr;
			bool _takeInput = false;
			inputName_t _input;

	};

}
