#pragma once

#include "state.hpp"
#include <iostream>

class attack : public state {
	public:
		attack();
	protected:
		void see_enemy(player* player) override;
                void enemy_gone(player* player) override;
                void no_ammo(player* player) override;
                ~attack();

}
