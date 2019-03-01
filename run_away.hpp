#pragma once

#include "state.hpp"
#include <iostream>

class run_away : public state {
	public:
		run_away();
	protected:
		void see_enemy(player* player) override;
                void enemy_gone(player* player) override;
                void no_ammo(player* player) override;
                ~run_away();

}
