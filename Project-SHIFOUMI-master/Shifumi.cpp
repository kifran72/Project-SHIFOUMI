#include <iostream>

using namespace std;

// Pierre==1 ; Feuille==2; Sciseau==3;

class shifumi
{
  private:
        int NbManches = 3; //Nombre de manche total
        int Manches = 0;
        int STARTTOUCHE = 0;
        int Resultat;           // True pou joueur 1 et False Joueur 2
        int a = 0;               // Borne exclue min du rand
        int b = 4;  
    
        int Regle(string ChoixJoueur1, string ChoixJoueur2) // Fonction de règle de jeu qui deffini le gagnant de la partie.
            {
                
                if (ChoixJoueur1 == "pierre" && ChoixJoueur2 == "feuille") // Pierre vs Feuille  Pierre Lose.
                {
                    Resultat = 0;
                }
                else if (ChoixJoueur1 == "pierre" && ChoixJoueur2 == "feuille") // Pierre vs Sciseau  Pierre Win.
                {
                    Resultat = 1;
                }

                if (ChoixJoueur1 == "feuille" && ChoixJoueur2 == "pierre") // Feuille vs Pierre  Feuille Win.
                {   
                    Resultat = 1;
                }
                else if (ChoixJoueur1 == feuille && ChoixJoueur2 == sciseau) // Feuille vs Sciseau  Feuille Lose.
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

            
            }
          
            
        int Score(bool Resultat) // Fonction de vie du joueur avec un bolléen en paramètre.
            {
                
                if (Resultat == 1)
                {
                    ScoreChoixJoueur1 = ScoreChoixJoueur1 + 1;
                    cout >> Player1Name "Gagne la manche";
                    Manche++;
                }
                else
                {
                    ScoreChoixJoueur2 = ScoreChoixJoueur2 + 1;
                    cout >> Player2Name "Gagne la manche ";
                    Manche++;
                }
            }

        int Win(int NbManches, int Manche, int ScoreChoixJoueur1, int ScoreChoixJoueur2) // Fonction de recherche si le jeu est fini et cherche le Winner
            {
                if (NbManches == Manche)
                {
                    if (ScoreChoixJoueur1 > ScoreChoixJoueur2)
                    {
                        cout >> Player1Name "Gagne le jeu";
                    }
                    else
                    {
                        cout >> Player2Name "Gagne le jeu";
                    }
                }
            }

            

        int Boot(int a, int b)
            {
                int ChoixJoueur2 = rand() % (b - a) + a;
            }
        
        

    public:


   



    int Initialisation() //Fonction d'Initialisation de la variable NbManches et du nom des joueurs.
            {
                cout << "Saisir le nombre de manches pour gagner";
                cin >> NbManches;

                while (NbManches >= 30 && NbManches <= 0)
                {
                    cout << "Saisir le nombre de manches pour gagner";
                    cin >> NbManches;
                }

                cout << "Nom du joueur 1";
                cin >> Player1Name;
                cout << "Nom du joueur 1";
                cin >> Player2Name;
                return 0;
            }

    int StartGame()
            {
                cout << "Hello , Bienvenue sur le jeu du shifumi" << endl;
                cout << "Choix du mod de jeu " << endl;
                cout << "Joueur vs Joeur TOUCHE 1" << endl;
                cin >> STARTTOUCHE;
                cout << "joueur VS BOOT TOUCHE 2" << endl;
                cin >> STARTTOUCHE;

                if (STARTTOUCHE == 1)
                {
                    Initialisation();
                }
                else if (STARTTOUCHE == 2)
                {
                }
                else
                    {
                        cin.ignore();
                        return 0;
                    }
            }
    
    
};

class joueur
{
    private:

        int ChoixJoueur1 = 0;         //Choix Choixjoueur1
        int ChoixJoueur2 = 0;         //Choix Choixjoueur2
        string Player1Name;      //Nom du joueur 1
        string Player2Name;      //Nom du joueur 2
        int ScoreChoixJoueur1 = 0;    //Score du joueur 1
        int ScoreChoixJoueur2 = 0;    //Score du joueur 2

    public:
    
}




    // end
