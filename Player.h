#ifndef PLAYER_H
#define PLAYER_H
#include <string.h>
#include <iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

class Player
{
    private:
        string nickname;
        int saldo;
        int numero,cant_apostar;
        string juego;
    public:
        Player();
        Player(string, int);
        Player(Player &p);
        int get_saldo();
        int get_nickname();
        int get_cant_apostar();
        void set_nickname(string nick);
        void set_saldo(int x);
        void set_cant_apostar(int ap);
        void set_numero(int num);
        virtual int apuesta(int num, int cant_apostar);
};



#endif // PLAYER_H

