#pragma once

#include <iostream>
#include <string>

#include "player.hpp"

enum state_t {
	patrol,
	attack,
	run_away
};

class state {
	public:
		state();
		virtual void see_enemy(player* player);
		virtual void enemy_gone(player* player);
		virtual void no_ammo(player* player);
		virtual ~state();
	protected:
		std::string name;
};
