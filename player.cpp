#include "player.hpp"
#include "patrol.hpp"

player::player(){
	current_state = new patrol();
	patrolstate = current_state;
	attackstate = null;
	runawaystate = null;
}

player::~player(){
	delete current_state;
}

player::setstate(state_t stateEnum){
	switch(stateEnum){
		case patrol:
			if(!patrolstate){ 
				current_state = new patrol();
				patrolstate = current_state;
			}else{
				current_state = patrolstate;
			}
			break;
		case attack:
		       if(!attackstate){ 
				current_state = new attack();
				attackstate = current_state;
			}else{
				current_state = attackstate;
			}
			break;
		case : run_away
			if(!runawaystate){ 
				current_state = new run_away();
				runawaystate = current_state;
			}else{
				current_state = runawaystate;
			}
			break;
		default:
			std::cout << "no such state" << std::endl;
			break;
	}

}

player::do_see_enemy(){
	current_state->see_enemy(this);
}

player::do_enemy_gone(){
	current_state->see_enemy(this);
}

player::do_no_ammo(){
	current_state->no_ammo(this);
}


