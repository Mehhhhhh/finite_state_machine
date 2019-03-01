#pragma once

#include <iostream>
#include <string>

#include "state.hpp"

class player{
	public:
		player();
		void setstate(state_t stateEnum);
		void process();
		void do_see_enemy();
		void do_enemy_gone();
		void do_no_ammo();
		void ~player();
	private:
		state* current_state;
		state* patrolstate;
		state* attackstate;
		state* runawaystate;
}
