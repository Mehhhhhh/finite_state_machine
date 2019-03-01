patrol.o:patrol.cpp player.cpp
	gcc -c patrol.cpp -o patrol.o
attack.o:attack.cpp
	gcc -c attack.cpp -o attack.o
run_away.o:run_away.cpp
	gcc -c run_away.cpp -o run_away.o
player.o:player.cpp
	gcc -c player.cpp -o player.o
main:player.o attack.o patrol.o run_away.o state.o
	gcc player.o attack.o patrol.o run_away.o -o main

