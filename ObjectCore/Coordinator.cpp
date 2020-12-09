#include "Coordinator.hpp"
#include "pch.h"

using namespace std;

namespace APC
{
        bool _takeInput(inputName_t input)
        {
                return (hand_left <= input && input <= feet_right);
        }
        void makeChoice(inputName_t input_name)
        {
                if (_takeInput(input_name))
                        inputName_t _input = input_name;
        }
        void hand__left(void)
        {
                makeChoice(inputName_t(rand()%1));
        }
        void hand__right(void)
        {
                makeChoice(inputName_t(rand()%2));
        }
        void feet__left(void)
        {
                makeChoice(inputName_t(rand()%3));
        }
        void feet__right(void)
        {
                makeChoice(inputName_t(rand()%4));
        }
}
