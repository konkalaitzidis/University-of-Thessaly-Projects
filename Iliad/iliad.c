#include <stdio.h>
#include <string.h>
#define N 22

struct iliad {
    char name[15];
};

int main(){

    struct iliad names[N]={

    strcpy(names[0].name, "Achilles"),
    strcpy(names[1].name, "Jupiter"),
    strcpy(names[2].name, "Juno"),
    strcpy(names[3].name, "Minerva"),
    strcpy(names[4].name, "Mars"),
    strcpy(names[5].name, "Apollo"),
    strcpy(names[6].name,"Pluto"),
    strcpy(names[7].name, "Mercury"),
    strcpy(names[8].name, "Venus"),
    strcpy(names[9].name,"Neptune"),
    strcpy(names[10].name, "Vulcan"),
    strcpy(names[11].name, "Diana"),
    strcpy(names[12].name, "Vesta"),
    strcpy(names[13].name, "Diomed"),
    strcpy(names[14].name, "Agamemnon"),
    strcpy(names[15].name, "Priam"),
    strcpy(names[16].name, "Helen"),
    strcpy(names[17].name, "Hector"),
    strcpy(names[18].name, "Paris"),
    strcpy(names[19].name, "Andromache"),
    strcpy(names[20].name, "Patroclus"),
    strcpy(names[21].name, "Thetis"),
    strcpy(names[22].name, "Ajax"),

    };

    FILE *TEXT;
    int i,j,l,c=0, mesa_se_leksi, wc=0, counter=0, len;
    char word[25], IlIAD[30000];
    float fre;

    fprintf("\nInsert name file: ");
    gets(ILIAD)

    TEXT = fopen("ILIAD", "r");
    if (f == NULL) {
            printf("\n\nThe file has not been found!\n\n");
            return -1;
    }


    len =strlen(names[22])

    while (!feof(TEXT)){
        c = fgetc(TEXT);
        if ((c>='A' && c<='Z') || (c>='a' && c<'z') || (c>='0' && c<='9')){
            if (mesa_se_leksi ==0;){
                l++;
                mesa_se_leksi = 1;
                
                i =0;
                while (i<len && c=word[i]){
                    i++;
                    c=fgetc(TEXT);
                }
                if (i==len){
                    for(j=0; j<N; j++){
                        if (word==names[j].name){
                            counter++;
                        }
                    }
                    if(!((c>='A' && c<='Z') || (c>='a' && c<'z') || (c>='0' && c<='9'))){
                        wc++;
                        mesa_se_leksi =0;
                    }
                }
            }
        }

        else {
            mesa_se_leksi = 0;
        }
    }

    fclose(TEXT);


    printf("/tGods and heros have appeared about %d times!\n\n", counter);
    fre = counter/(wc+1)*100;
    printf("/tWith a frequency of %d ", fre);

    return 0;
}


