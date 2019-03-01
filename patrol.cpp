#include "patrol.hpp"

patrol::patrol(std::string state_name){}

void patrol::see_enemy(player* player){
	std::cout << "I see enemy" << std::endl;
	player->setstate(state_t.attack);
}

void patrol::enemy_gone(player* player){
	std::cout << "cannot see enemy gone when patroling" << std::endl;
}

void patrol::no_ammo(player* player){
	std::cout << "cannot be no ammo when patrolling" << std::endl;
}

patrol::~patrol(){}
