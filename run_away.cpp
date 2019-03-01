#include "run_away.hpp"

run_away::run_away(std::string state_name){}

void run_away::see_enemy(player* player){
	std::cout << "no corresponding action" << std::endl;
}

void run_away::enemy_gone(player* player){
	std::cout << "no corresponding action" << std::endl;
}

void run_away::no_ammo(player* player){
	std::cout << "no corresponding action" << std::endl;
}

run_away::~run_away(){}
