#include "Player.h"


Player::Player()
{
    nickname = "vacio";
    saldo = 0;
}

Player::Player(string nick, int sald)
{
    nickname = nick;
    saldo = sald;
}

Player::Player(Player &p)
{
    nickname = p.nickname;
    saldo = p.saldo;
}

int Player::get_saldo()
{
    return saldo;
}

void Player::set_saldo(int x)
{
    saldo = x;
}

int Player::get_nickname()
{
    cout<< nickname;
}

int Player::get_cant_apostar()
{
    return cant_apostar;
}

void Player::set_cant_apostar(int ap)
{
    if(ap<=saldo)
        cant_apostar = ap;
}

void Player::set_numero(int num)
{
    numero = num;
}

void Player::set_nickname(string nick)
{
    nickname = nick;
}

int Player::apuesta(int num, int cant_apostar)
{
    if(numero == num)
        return saldo +=cant_apostar*36;
}

