#ifndef APUESTA_H
#define APUESTA_H
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "Ruleta.h"

using namespace std;

template <typename T>
class Estrategia
{
    private:
        virtual void apuesta(T num, T cant_apostar, string modo)=0;
    protected:
        T num, cant_apostar;
        string modo;
    public:
        Estrategia(T n, T can, string mod):num(n),cant_apostar(can),modo(mod){}
        void formato();
};

template <typename T>
class testbet
{
    private:
        Estrategia *estrategia_;
    public:
        enum tipo_apuesta{
            numero, jugada
        };
        testbet()
        {
            estrategia_ = NULL;
        }
        void set_estrategia(T num, T cant_apostar, string modo);
        void doIT();

};

template <typename T>
class NumBet : public Estrategia
{
public:
    NumBet(T n, T can):num(n),cant_apostar(can){}
private:

    void apuesta(T n, T can)
    {
    if(numero_random()==numero)
    {
        int res;
        res =cant_apostar*36;
        wol = true;
        cout << "Ganaste "<< res << " Soles"<<endl;
    }
    else{
        cout <<"Perdiste"<<endl;
        wol = false;
    }
    }
};

template <typename T>
class ModBet : public Estrategia
{
public:
    ModBet(T n, T can, string mod):num(n),cant_apostar(can),modo(mod){}
private:
    void apuesta(T n, T can, string mod)
    {
        if(jug=="par")
    {
        if(num%2==0){
            wol = true;
            int res = cant_apostar * 2;
            cout << "Ganaste "<< res<< " Soles"<<endl;
        }
        else
            wol = false;
            cout << "Perdiste"<<endl;
    }
    else
    {
        if(num%2!=0){
            wol=true;
            int res = cant_apostar * 2;
            cout << "Ganaste "<< res<< " Soles"<<endl;
        }
        else{
            wol = false;
            cout<< "Perdiste"<<endl;
        }
    }
    }
};

template <typename T>
void testbet::set_estrategia(T nu, T can, string mod)
{
    delete estrategia_;
    if(mod=modo)
        estrategia_=new ModBet(T n, T can, string mod);
    else if(mod!=modo)
        estrategia_=new NumBet(T n, T can);
}

void testbet::doIT()
{
    estrategia_->formato();
}



#endif // APUESTA_H
