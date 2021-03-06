#include <iostream>
#include <string>

using namespace std;


class Shifumi
{
private:
    int NbManches;       //Nombre de manche total
    int Manches;
    int STARTTOUCHE;
    int Resultat;        // True pour Joueur 1 et False Joueur 2
    int a;               // Borne exclue min du rand
    int b;
    int ScoreJoueur1;
    int ScoreJoueur2;

    string Player1Name;
    string Player2Name;

    void Regle(int ChoixJoueur1, int ChoixJoueur2) // Fonction de règle de jeu qui defini le gagnant de la partie.
    {
        //Pierre 1, Feuille 2, Ciseaux 3
        if (ChoixJoueur1 == 1 && ChoixJoueur2 == 2) // Pierre vs Feuille  Pierre Lose.
        {
            Resultat = 0;
        }
        else if (ChoixJoueur1 == 1 && ChoixJoueur2 == 2) // Pierre vs Ciseaux  Pierre Win.
        {
            Resultat = 1;
        }

        if (ChoixJoueur1 == 2 && ChoixJoueur2 == 1) // Feuille vs Pierre  Feuille Win.
        {
            Resultat = 1;
        }
        else if (ChoixJoueur1 == 2 && ChoixJoueur2 == 3) // Feuille vs Ciseaux  Feuille Lose.
        {
            Resultat = 0;
        }

        if (ChoixJoueur1 == 3 && ChoixJoueur2 == 1) // Ciseaux vs Pierre  Ciseaux Lose.
        {
            Resultat = 0;
        }
        else if (ChoixJoueur1 == 3 && ChoixJoueur2 == 2) // Ciseaux vs Feuille  Ciseaux Win.
        {
            Resultat = 1;
        }

        Score(Resultat);
    }

    void Score(int Resultat) // Fonction de vie du joueur avec un bolléen en paramètre.
    {
        if (Resultat == 1)
        {
            ScoreJoueur1++;
            cout << Player1Name <<": Gagne la manche" << endl;
        }
        else
        {
            ScoreJoueur2++;
            cout << Player2Name << ": Gagne la manche " << endl;
        }
        cout << Player1Name << endl << endl <<  "Nb manches: " << Manches << endl << "Score: " << ScoreJoueur1 << endl;
        cout << Player2Name << endl << endl << "Nb manches: " << Manches << endl << "Score: " << ScoreJoueur2 << endl;

        Win(NbManches,Manches);
    }

    void Win(int NbManches, int Manches) // Fonction de recherche si le jeu est fini et cherche le Winner
    {
        if (NbManches == Manches)
        {
            if (ScoreJoueur1 > ScoreJoueur2)
            {
                cout << Player1Name << " Gagne le jeu !" << endl;
            }
            else
            {
                cout << Player2Name << " Gagne le jeu !" << endl;
            }
        }
    }



    // int Bot(int a, int b)
    //     {
    //         int ChoixJoueur2 = rand() % (b - a) + a;
    //     }


public:

    Shifumi() {
        NbManches = 1;
        Manches = 1;
        ScoreJoueur1 = 0;
        ScoreJoueur2 = 0;
    }

    int StartGame()
    {

        cout << "Hello , Bienvenue sur le jeu du shifumi" << endl;
        cout << "Choix du mod de jeu " << endl;
        cout << "1. Joueur vs Joueur" << endl << "2. Joueur VS BOT" << endl;
        cin >> STARTTOUCHE;

        if (STARTTOUCHE == 1)
        {
            Initialisation();
        }
        else if (STARTTOUCHE == 2)
        {
            cin.ignore();
        }
        else
            {
                cin.ignore();
                return 0;
            }
        return STARTTOUCHE;
    }
    void Initialisation() //Fonction d'Initialisation de la variable NbManches et du nom des joueurs.
    {


        cout << "Saisir le nombre de manches pour gagner" << endl;
        cin >> NbManches;

        while (NbManches >= 30 && NbManches <= 0)
        {
            cout << "Saisir le nombre de manches pour gagner" << endl;
            cin >> NbManches;
        }

        cout << "Nom du joueur 1" << endl;
        cin >> Player1Name;
        cout << "Nom du joueur 2" << endl;
        cin >> Player2Name;

        Game();
    }


    void Game()
    {
        int ChoixJoueur1;
        int ChoixJoueur2;


        for(Manches=0 ; Manches<NbManches ; Manches++)
        {
            cout << endl << Player1Name << endl << "1. Pierre" << endl << "2. Feuille" << endl << "3. Ciseaux" << endl;
            cin >> ChoixJoueur1;
            cout << endl << Player2Name << endl << "1. Pierre" << endl << "2. Feuille" << endl << "3. Ciseaux" << endl;
            cin >> ChoixJoueur2;

            Regle(ChoixJoueur1, ChoixJoueur2);
        }
    }


};

    // end
