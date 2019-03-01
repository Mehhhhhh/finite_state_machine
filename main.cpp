#include <iostream>
#include "player.cpp"

int main(int c, char** argv){
	player* aplayer = new player();
	aplayer->do_see_enemy();
	aplayer->do_no_ammo();
	aplayer->do_enemy_gone();
}
