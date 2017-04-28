
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>

using namespace std;


class Shifumi
{
  private:
        int NbManches; //Nombre de manche total
        int Manches;
        int STARTTOUCHE;
        int Resultat;           // True pour joueur 1 et False Joueur 2
        int a;               // Borne exclue min du rand
        int b;  
        int ScoreJoueur1;
        int ScoreJoueur2;

        string Player1Name;
        string Player2Name;



    
        void Regle(int ChoixJoueur1, int ChoixJoueur2) // Fonction de règle de jeu qui deffini le gagnant de la partie.
            {
                //pierre 1 , feuille 2, sciseau 3 
                if (ChoixJoueur1 == 1 && ChoixJoueur2 == 2) // Pierre vs Feuille  Pierre Lose.
                {
                    Resultat = 0;
                }
                else if (ChoixJoueur1 == 1 && ChoixJoueur2 == 3) // Pierre vs Sciseau  Pierre Win.
                {
                    Resultat = 1;
                }

                if (ChoixJoueur1 == 2 && ChoixJoueur2 == 1) // Feuille vs Pierre  Feuille Win.
                {   
                    Resultat = 1;
                }
                else if (ChoixJoueur1 == 2 && ChoixJoueur2 == 3) // Feuille vs Sciseau  Feuille Lose.
                {
                    Resultat = 0;
                }

                if (ChoixJoueur1 == 3 && ChoixJoueur2 == 1) // Sciseau vs Pierre  Sciseau Lose.
                {
                    Resultat = 0;
                }
                else if (ChoixJoueur1 == 3 && ChoixJoueur2 == 2) // Sciseau vs Feuille  Sciseau Win.
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
                    cout << "Joueur " << Player1Name <<" Gagne la manche :)" << endl;

                    
                }
                else
                {
                    ScoreJoueur2++;
                    cout << "Joueur " << Player2Name << ": Gagne la manche :)" << endl << endl << endl;
            
                }
                cout << "N° manches: " << Manches << endl << endl;
                cout << Player1Name << ": Score: " << ScoreJoueur1 << endl;
                cout << Player2Name << ": Score: " << ScoreJoueur2 << endl << endl << endl << endl;
            
                

                Win();
                
                
            }

        int Win() // Fonction de recherche si le jeu est fini et cherche le Winner
            {
                if (NbManches == Manches)
                {
                    if (ScoreJoueur1 > ScoreJoueur2)
                    {
                        cout << "Joueur " << Player1Name << " Gagne le jeu !" << endl;
                    }
                    else
                    {
                        cout << "Joueur " <<  Player2Name << " Gagne le jeu !" << endl;
                    }
                }
            }

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
                cout << "1. Joueur vs Joueur" << endl << "2. joueur VS BOT" << endl;
                cin >> STARTTOUCHE;

                if (STARTTOUCHE == 1)
                {
                    Initialisation(STARTTOUCHE);
                }
                else if (STARTTOUCHE == 2)
                {   
                    Initialisation(STARTTOUCHE);
                }
                else
                    {
                        cin.ignore();
                        return 0;
                    }
                    return STARTTOUCHE;
            }
    void Initialisation(int STARTTOUCHE) //Fonction d'Initialisation de la variable NbManches et du nom des joueurs.
            {

		if (STARTTOUCHE == 1) {
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
                    ClearScreen();
					Game(STARTTOUCHE);
				}

		else if (STARTTOUCHE == 2){
			cout << "Saisir le nombre de manches pour gagner" << endl;
			cin >> NbManches;
			Player2Name = "BOT";

			while (NbManches >= 30 && NbManches <= 0)
			{
				cout << "Saisir le nombre de manches pour gagner" << endl;
				cin >> NbManches;
			}

			cout << "Nom du joueur 1" << endl;
			cin >> Player1Name;
            ClearScreen();

			Game(STARTTOUCHE);
		}

            }

   
    void Game(int STARTTOUCHE)
    {   
        int ChoixJoueur1;
        int ChoixJoueur2;
        
        

		if (STARTTOUCHE == 1) {
			for (Manches = 1; Manches <= NbManches; Manches++)
			{
				cout << Player1Name << endl << endl << endl << "1. pierre" << endl << "2. Feuille" << endl << "3. Ciseau" << endl;
				cin >> ChoixJoueur1;
                ClearScreen();
				cout << Player2Name << endl << endl << endl << "1. pierre" << endl << "2. Feuille" << endl << "3. Ciseau" << endl;
				cin >> ChoixJoueur2;
                ClearScreen();

				Regle(ChoixJoueur1, ChoixJoueur2);
			}

		}
		else if(STARTTOUCHE == 2) {

			for (Manches = 1; Manches <= NbManches; Manches++)
			{
                
				cout << Player1Name << endl << "1. pierre" << endl << "2. Feuille" << endl << "3. Ciseau" << endl;
				cin >> ChoixJoueur1;
                ClearScreen();

				ChoixJoueur2 = rand() % 3 + 1;
                cout << Player2Name << endl << ChoixJoueur2 << endl;
                ClearScreen();
				Regle(ChoixJoueur1, ChoixJoueur2);
			}

		}
        
    }

    int baniere()
    {
        string shifumi[]=
        {
        "    _    _     _ _____ _______ _     _ ______  _____ "
        ,"   | |  | |   | (_____|_______) |   | |  ___ \(_____)"
        ,"    \ \ | |__ | |  _   _____  | |   | | | _ | |  _   "
        ,"     \ \|  __)| | | | |  ___) | |   | | || || | | |  "
        ," _____) ) |   | |_| |_| |     | |___| | || || |_| |_ "
        ,"(______/|_|   |_(_____)_|      \______|_||_||_(_____)"};

    return 0;

    }

    void ClearScreen()
    {
    cout << string( 100, '\n' );
    }
};






	//systeme(clear) linux/MAC
	//systeme(cls) windows
    // end
