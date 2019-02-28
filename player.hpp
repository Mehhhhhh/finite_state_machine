#pragma once

#include <iostream>
#include <string>

#include "state.hpp"

class player{
	public:
		player(state& start_state);
	private:
		state* current_state;
}
