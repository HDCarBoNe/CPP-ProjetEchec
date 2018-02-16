#include <iostream>

using namespace std;


int main()
{
    //tableau qui contient les pions de l'échiquier
    int tableau[]={11,22,33,44,55,66,77,88};
    cout << "Jeux echec" << endl;

    //Afficher l'échiquier
    cout<< "|   | A |  B | C  | D  | E  | F  | G  | H  |"<< endl;
    cout<< "____________________________________________" <<endl;
    for(int i = 0; i < 8;i++){
    cout<<"|"<< " "<< i+1 <<" |" << tableau[0] <<" |" " " <<tableau[1]<< " |" " " <<tableau[2] <<" |" " " <<tableau[3]<< " |" " " <<tableau[4]<< " |" " " <<tableau[5] <<" |" " "<< tableau[6] <<" |" " " <<tableau[7]<<" |" <<endl;
    cout<< "|   |   |    |    |    |    |    |    |    |"<< endl;
    }
    cout<< "____________________________________________" <<endl;

    return 0;
}
