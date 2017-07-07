#include <iostream>
#include "Player.h"
#include "Ruleta.h"
#include <string.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

using namespace std;


int main()
{

    char x= 'eder';
    char y= 'cornejo';
    string z= "daimon";
    int s= 100;
    Player p1("daimon",100);
    Ruleta r(p1);
    r.start(p1);
    //p1.set_saldo(p1.get_saldo()+5);
    //cout<< p1.get_saldo();

    return 0;
}
