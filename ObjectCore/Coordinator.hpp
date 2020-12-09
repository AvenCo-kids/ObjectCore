#ifndef AVENCO_PC_COORDINATOR_HPP_
#define AVENCO_PC_COORDINATOR_HPP_

#include <map>
#include <string>
#include <vector>
#include "story.hpp"

namespace APC
{
    class Coordinator
    {
    public:
        Coordinator() = default;
        ~Coordinator() = default;

        void hand__left(void);
        void hand__right(void);
        void feet__left(void);
        void feet__right(void);
        bool _takeInput(inputName_t input);
        void startStory(story_t *story);
        void makeChoice(inputName_t input) noexcept;
    private:
        inputName_t _input;
        story_t *_story;
        story_node_t *_curr;
    };
}

#endif /* AVENCO_PC_COORDINATOR_HPP_ */
