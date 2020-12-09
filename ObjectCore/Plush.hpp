#ifndef AVENCO_PC_PELUCHE_HPP_
#define AVENCO_PC_PELUCHE_HPP_

#include <thread>
#include "Coordinator.hpp"

namespace APC
{
    enum class InputType {SomeInput, AnotherInput};

    class Plush
    {
    public:
        Plush();
        ~Plush();
		void start();
		void hand_left(void);
		void hand_right(void);
		void feet_left(void);
		void feet_right(void);

    private:
        Coordinator *_coord;
		std::thread *_thread;
    };
}


#endif /* AVENCO_PC_PLUSH_HPP_ */
