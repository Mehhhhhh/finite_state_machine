#pragma once

#include "state.hpp"
#include <iostream>

class patrol : public state {
	public:
		patrol();
	protected:
		void see_enemy(player* player) override;
                void enemy_gone(player* player) override;
                void no_ammo(player* player) override;
                ~patrol() override;

}
