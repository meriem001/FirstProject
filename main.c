#include<stdio.h>
#include<string.h>   //we need it for char
 struct livres{              //enregistrement
char titre[100];  //when i didn't put a number he refused a word more than 5 character
float code_isbn;
char nom[100],prenom[100];
int date,m,y;     //m for month,y for year
char maison[60];
 };

void lecture (int n)      //procédure de la lecture
{
    struct livres b[100];   //b for book
   for(int i=0;i<n;i++){
    printf("\n entrer les informations des livres:[%d]",i);
    printf("\n entrer le titre:");
    scanf("%s",&b[i].titre);
    printf("\n entrer le code:");
    scanf("%f",&b[i].code_isbn);
    printf("\n entrer l'auteur:");
    scanf("%s,%s",&b[i].nom,&b[i].prenom);    //you need to put ',' between le nom et le prenom
    printf("\n entrer la date:");
    scanf("%d/%d/%d",&b[i].date,&b[i].m,&b[i].y); //you need to put '/'between day month and year
    printf("\n entrer la maison de publication:");
    scanf("%s",&b[i].maison);
}


for(int i=0;i<n;i++){
    printf("\n\n les informations des livres[%d]:",i);
    printf("\n le titre : %s",&b[i].titre);     //it doesnt want to work without the '&' when i put it it works
    printf("\n le code : %f",b[i].code_isbn);
    printf("\n l'auteur : %s,%s",&b[i].nom,&b[i].prenom);
    printf("\n la date : %d/%d/%d",b[i].date,b[i].m,b[i].y);
    printf("\n la maison de publication : %s",&b[i].maison);
}
}
int main() {
 int n; //n number of the books
 printf("\n entrer le nombre des livres:");
 scanf("%d",&n);
 struct livres b[100];
 lecture (n);
return 0;
}
