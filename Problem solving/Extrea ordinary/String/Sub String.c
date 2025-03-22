#include <stdio.h>
#include <string.h>
int strlen_between_two_b (char sen[]) {

    int i, j ;

    int count = 0, flag = 0 ;

    for (i=0; sen[i]; i++) {

        if (sen[i] == 'b') {

            for (j=i+1; sen[j] != 'b'; j++) count++ ;

            break ;

        }

    }

    return count ;

}



int main () {

    char ch[100] ;

    gets(ch) ;



    printf ("%d", strlen_between_two_b(ch)) ;

    return 0;

}
