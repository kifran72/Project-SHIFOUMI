#include <iostream>

using namespace std;

// Pierre==1 ; Feuille==2; Sciseau==3;

int StartGame()
{
    cout << "Hello , Bienvenue sur le jeu du shifumi" << endl;
    cout << "Choix du mod de jeu " << endl;
    cout << "Joueur vs Joeur TOUCHE 1" << endl;
    cin >> STATTOUCHE;
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
        (STARTTOUCHE != 1 && != 2)
        {
            cin.ignore();
            return 0;
        }
}

int Regle(int Joueur1, int Joueur2) // Fonction de règle de jeu qui deffini le gagnant de la partie.
{
    if (Joueur1 == "1" && Joueur2 == "2") // Pierre vs Feuille  Pierre Lose.
    {
        Resultat = false;
    }
    else if (Joueur1 == "1" && Joueur2 == "3") // Pierre vs Sciseau  Pierre Win.
    {
        Resultat = true;
    }

    if (Joueur1 == "2" && Joueur2 == "1") // Feuille vs Pierre  Feuille Win.
    {
        Resultat = true;
    }
    else if (Joueur1 == "2" && Joueur2 == "3") // Feuille vs Sciseau  Feuille Lose.
    {
        Resultat = false;
    }

    if (Joueur1 == "3" && Joueur2 == "1") // Sciseau vs Pierre  Sciseau Lose.
    {
        Resultat = false;
    }
    else if (Joueur1 == "3" && Joueur2 == "2") // Sciseau vs Feuille  Sciseau Win.
    {
        Resultat = true;
    }

    if (Joueur1 == Joueur2) // Egalité relancer une autre manches.
    {
        NbManches = NbManches;
        cout << "Egalité des joueurs Manche supplémentaire";
    }

    int Score(bool Resultat) // Fonction de vie du joueur avec un bolléen en paramètre.
    {
        if (Resultat == true)
        {
            ScoreJoueur1 = ScoreJoueur1 + 1;
            cout >> Player1Name "Gagne la manche";
            Manche++;
        }
        else
        {
            ScoreJoueur2 = ScoreJoueur2 + 1;
            cout >> Player2Name "Gagne la manche ";
            Manche++;
        }
    }

    int Win() // Fonction de recherche si le jeu est fini et cherche le Winner
    {
        if (NbManches == Manche)
        {
            if (ScoreJoueur1 > ScoreJoueur2)
            {
                cout >> Player1Name "Gagne le jeu";
            }
            else
            {
                cout >> Player2Name "Gagne le jeu";
            }
        }
    }

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
    }

    int Boot(int a, int b)
    {
        Joueur2 = rand() % (b - a) + a;
    }

    // end

    int main()
    {

        int Joueur1 = 0;
        int Joueur2 = 0;
        int NbManches = 3; //Nombre de manche total
        int Manches = 0;
        int STARTTOUCHE = 0;
        string Player1Name = ""; //Nom du joueur 1
        string Player2Name = ""; //Nom du joueur 2
        bool Resultat;           // True pou joueur 1 et False Joueur 2
        int ScoreJoueur1 = 0;    //Score du joueur 1
        int ScoreJoueur2 = 0;    //Score du joueur 2
        int a = 0;               // Borne exclue min du rand
        int b = 4;               // Borne exclue Max du rand
    }

    int main()
    {

        int Choix1;
        int Choix2;
        int Joueur1;
        int Joueur2;
        int NbManches = 3;
        char Player1Name = "";
        char Player2Name = "";
        bool Resultat = 0;    // True pou joueur 1 et False Joueur 2
        int ScoreJoueur1 = 0; //Score du joueur 1
        int ScoreJoueur2 = 0; //Score du joueur 2
        return 0;
    }