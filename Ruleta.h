#ifndef RULETA_H
#define RULETA_H
#include "Player.h"
#include "Game.h"


class Ruleta : public Player
{
    private:
        Player p;
    protected:
        bool wol;
    public:
        Ruleta(Player &p);
        void start(Player &p);
        int numero_random();
        int apuesta(int numero, int cant_apostar);
        int apuesta(int num, string jug, int cant_apostar);

};

#endif // RULETA_H
