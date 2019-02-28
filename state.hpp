#pragma once

#include <iostream>
#include <string>

#include <player.hpp>

class state {
	public:
		state(std::string state_name);
		virtual void see_enemy(player& player);
		virtual void enemy_gone(player& player);
		virtual void no_ammo(player& player);
	protected:
		std::string name;
		void dosomething();
}
