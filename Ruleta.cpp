#include "Ruleta.h"

Ruleta::Ruleta(Player &p)
{
    ;
}

void Ruleta::start(Player &p)
{
    while(true){
    cout << "Juego de la Ruleta "<<endl;
    //int sald;
    //string nick;
    //cout << "Ingrese el nombre de usuario : ";
    //cin >> nick;
    //p.set_nickname(nick);
    //cout << "Ingrese el saldo a disponer : ";
    //cin >> sald;
    //p.set_saldo(sald);
    cout << " Bienvenido " <<p.get_nickname()<<endl;
    cout << "Su saldo actual es de :" << p.get_saldo()<<endl;
    cout << " " <<endl;
    cout << "Numeros negros : 2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35"<<endl;
    cout << "Numeros rojos  : 1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36"<<endl;
    cout << "|   | 3 | 6 | 9 | 12 | 15 | 18 | 21 | 24 | 27 | 30 | 33 | 36 |"<<endl;
    cout << "| 0 | 2 | 5 | 8 | 11 | 14 | 17 | 20 | 23 | 26 | 29 | 32 | 35 |"<<endl;
    cout << "|   | 1 | 4 | 7 | 10 | 13 | 16 | 19 | 22 | 25 | 28 | 31 | 34 |"<<endl;
    cout << "    |  Par  |                                      |  Impar  |"<<endl;
    int ap;
    cout << "Su apuesta sera :"<<endl;
    cout << "1)numero "<<endl;
    cout << "2)jugada "<<endl;
    cin>>ap;
    if(ap==1){
        int num,soles;
        cout<< "Ingrese el numero a apostar : ";
        cin>>num;
        p.set_numero(num);
        cout<< "Ingrese la cantidad de dinero a apostar : ";
        cin>>soles;
        p.set_cant_apostar(soles);
        cout<< "Salio el siguente numero :"<<numero_random()<<endl;
        apuesta(num,soles);
        if(wol==true)
            p.set_saldo(p.get_saldo()+p.get_cant_apostar()*36);
        else
            p.set_saldo(p.get_saldo()-p.get_cant_apostar());
    }
    else{
        string mod;
        int soles;
        cout<< "Ingrese par o impar : ";
        cin>>mod;
        cout<< "Ingrese la cantidad de dinero a apostar : ";
        cin>>soles;
        p.set_cant_apostar(soles);
        int num = numero_random();
        cout<< "Salio el siguente numero :"<<num <<endl;
        apuesta(num,mod,soles);
        if(wol==true)
            p.set_saldo(p.get_saldo()+p.get_cant_apostar()*2);
        else
            p.set_saldo(p.get_saldo()-p.get_cant_apostar());
    }
    }


}

int Ruleta::apuesta(int numero, int cant_apostar)
{
    if(numero_random()==numero)
    {
        int res;
        res =cant_apostar*36;
        wol = true;
        cout << "Ganaste "<< res << " Soles"<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
    }
    else{
        cout <<"Perdiste"<<endl;
        wol = false;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
        cout <<" "<<endl;
    }
}

int Ruleta::apuesta(int num, string jug, int cant_apostar)
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

int Ruleta::numero_random()
{
    long int aleatorio;
    srand(time(NULL));
    aleatorio = rand()%38;
    return aleatorio;
}

