#include "Coordinator.hpp"

using namespace std;

namespace APC
{
        void hand_left(void)
        {
                makeChoice(inputName_t(rand()%1));
        }
        void hand_right(void)
        {
                makeChoice(inputName_t(rand()%2));
        }
        void feet_left(void)
        {
                makeChoice(inputName_t(rand()%3));
        }
        void feet_right(void)
        {
                makeChoice(inputName_t(rand()%4));
        }
        void makeChoice(inputName_t input_name)
        {
                
        }
}
