//Samuele Stabile 28 Settembre 2022

int main(int argc, char** argv){

    struct persona {
        char cognome[10];
        char nome[10];
        int anni;
    };

    struct persona x, y={"pinco","pallino",5}, z;
    x.anni=33;
    z=x;


    struct persona w[10], *t=&y;
    printf("%d %d %d",y.anni,t->anni,(*t).anni);

    typedef struct persona dude;
    dude personadicolore = {"Novissimo", "Marco", 19} ;

    typedef int intero;
    intero j = 1;

}