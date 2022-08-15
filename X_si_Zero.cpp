//desenarea unei table cu X si Zero
//prgramul se poate modifica pentru mai multe linii si coloane(o tabla mai mare)...aici este o proba pentru 4x4
//la sfarsit avem si o functie CePiesa() care ne pune sa alegem indicii unei casute si ne afiseaza ce este in acea casuta
#include <stdio.h>
#include <iostream>
using namespace std;
class TabladeJoc{
private:
    int t[4][4];
public:
    void Afiseaza();//deseneaza tabla (inclusiv cu space, X sau O )
    void PunePiesa(int l, int c, int p);//decidem unde punem "(spatiu)", X sau O
    void CePiesa(int l, int c);//afiseaza(returneaza) piesa de pe o pozitie specificata prin intermediul parametrilor(indicilor matricii)
};

void TabladeJoc::Afiseaza(){
    int l;
    int c;
    for (l=0;l<=3;l++){
        printf("+-+-+-+-+\n");
        for (c=0;c<=3;c++){
            printf("|");
            if (t[l][c] == 0)
                printf(" ");
            else if (t[l][c] == 1)
                printf("X");
            else if (t[l][c] == 2)
                printf("O");
        }
        printf("|\n");
    }
    printf("+-+-+-+-+\n");
}

void TabladeJoc::PunePiesa(int l, int c, int p){
    t[l][c] = p;
}

void TabladeJoc::CePiesa(int l, int c){
    if (t[l][c] == 0)
        printf(" \n");
    else if (t[l][c] == 1)
        printf("X\n");
    else if (t[l][c] == 2)
        printf("O\n");
}
int main(){
    int l;
    int c;
    TabladeJoc tabla;
    tabla.PunePiesa(0, 0, 0);tabla.PunePiesa(0, 1, 0);tabla.PunePiesa(0, 2, 1);tabla.PunePiesa(0, 3, 1);tabla.PunePiesa(1,0,0);tabla.PunePiesa(1, 1, 0);tabla.PunePiesa(1, 2, 0);tabla.PunePiesa(1, 3, 1);tabla.PunePiesa(2, 0, 2);tabla.PunePiesa(2, 1, 2);tabla.PunePiesa(2, 2, 0);tabla.PunePiesa(2, 3, 2);tabla.PunePiesa(3, 0, 1);tabla.PunePiesa(3, 1, 1);tabla.PunePiesa(3, 2, 1);tabla.PunePiesa(3, 3, 1);
    tabla.Afiseaza();
    cin>>l>>c;//specificam pozitia (cu ajut indicilor) pe care vrem sa o afisam
    tabla.CePiesa(l,c);
    getchar();
}

