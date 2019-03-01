#include "attack.hpp"

attack::attack(std::string state_name){}

void attack::see_enemy(player* player){
	std::cout << "already seen enemy" << std::endl;
}

void attack::enemy_gone(player* player){
	std::cout << "go back to patrol" << std::endl;
	player->setstate(state_t.patrol);
}

void attack::no_ammo(player* player){
	std::cout << "out of ammo!" << std::endl;
	player->setstate(state_t.run_away);
}

attack::~attack(){}
