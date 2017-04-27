#include <iostream>

using namespace std;


class shifumi
{
  private:
        int NbManches; //Nombre de manche total
        int Manches;
        int STARTTOUCHE;
        int Resultat;           // True pour joueur 1 et False Joueur 2
        int a;               // Borne exclue min du rand
        int b;  
    
        int Regle(string ChoixJoueur1, string ChoixJoueur2) // Fonction de règle de jeu qui deffini le gagnant de la partie.
            {
                //pierre 1 , feuille 2, sciseau 3 
                if (ChoixJoueur1 == "1" && ChoixJoueur2 == "2") // Pierre vs Feuille  Pierre Lose.
                {
                    Resultat = 0;
                }
                else if (ChoixJoueur1 == "1" && ChoixJoueur2 == "2") // Pierre vs Sciseau  Pierre Win.
                {
                    Resultat = 1;
                }

                if (ChoixJoueur1 == "2" && ChoixJoueur2 == "pierre") // Feuille vs Pierre  Feuille Win.
                {   
                    Resultat = 1;
                }
                else if (ChoixJoueur1 == "2" && ChoixJoueur2 == "3") // Feuille vs Sciseau  Feuille Lose.
                {
                    Resultat = 0;
                }

                if (ChoixJoueur1 == "3" && ChoixJoueur2 == "1") // Sciseau vs Pierre  Sciseau Lose.
                {
                    Resultat = 0;
                }
                else if (ChoixJoueur1 == "3" && ChoixJoueur2 == "2") // Sciseau vs Feuille  Sciseau Win.
                {
                    Resultat = 1;
                }

            return Resultat;
            }
          
            
        int Score(int Resultat,int Player1Name, int Player2Name ) // Fonction de vie du joueur avec un bolléen en paramètre.
            {
              int ScoreChoixJoueur1; 
              int ScoreChoixJoueur2; 
              int Manche; 
                if (Resultat == 1)
                {
                    ScoreChoixJoueur1 = ScoreChoixJoueur1 + 1;
                    cout << Player1Name <<": Gagne la manche" << endl;
                    Manche++;
                }
                else
                {
                    ScoreChoixJoueur2 = ScoreChoixJoueur2 + 1;
                    cout << Player2Name << ": Gagne la manche " << endl;
                    Manche++;
                }
                return Manche;
                return ScoreChoixJoueur1;
                return ScoreChoixJoueur2;
            }

        int Win(int NbManches, int Manche, int ScoreChoixJoueur1, int ScoreChoixJoueur2, int Player1Name, int Player2Name) // Fonction de recherche si le jeu est fini et cherche le Winner
            {
                if (NbManches == Manche)
                {
                    if (ScoreChoixJoueur1 > ScoreChoixJoueur2)
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

    int Initialisation() //Fonction d'Initialisation de la variable NbManches et du nom des joueurs.
            {
                int Player1Name;
                int Player2Name;
                int NbManches;
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
            
                return NbManches;
                return Player1Name;
                return Player2Name;
            }

    int StartGame()
            {
                int STARTTOUCHE;

                cout << "Hello , Bienvenue sur le jeu du shifumi" << endl;
                cout << "Choix du mod de jeu " << endl;
                cout << "1. Joueur vs Joueur" << endl << "2. joueur VS BOT" << endl;
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
    
    
};







    // end
