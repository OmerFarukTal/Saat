#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void makeTime (char (*dest)[100] ,char *time, int index  ) {

    
    char *str0[9] = {      "-------",
                           "-XXXXX-",
                           "-X---X-",
                           "-X---X-",
                           "-X---X-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-------"
                            };
    char *str1[9] = {      "-------",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-------"
                           };
    char *str2[9] = {      "-------",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-XXXXX-",
                           "-X-----",
                           "-X-----",
                           "-XXXXX-",
                           "-------"
                           };
    char *str3[9] = {      "-------",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-XXXXX-",
                           "-------"
                           };
    char *str4[9] = {      "-------",
                           "-X---X-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-------"
                           };
    char *str5[9] = {      "-------",
                           "-XXXXX-",
                           "-X-----",
                           "-X-----",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-XXXXX-",
                           "-------"
                           };
    char *str6[9] = {      "-------",
                           "-XXXXX-",
                           "-X-----",
                           "-X-----",
                           "-XXXXX-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-------"
                           };
    char *str7[9] = {      "-------",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-----X-",
                           "-------"
                           };
    char *str8[9] = {      "-------",
                           "-XXXXX-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-------"
                           };
    char *str9[9] = {      "-------",
                           "-XXXXX-",
                           "-X---X-",
                           "-X---X-",
                           "-XXXXX-",
                           "-----X-",
                           "-----X-",
                           "-XXXXX-",
                           "-------"
                           };
    
    if ( *(time + index) -48 == 0 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str0[i]);
        }
    }
    else if ( *(time + index) -48 == 1 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str1[i]);
        }
    } 
    else if ( *(time + index) -48 == 2 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str2[i]);
        }
    } 
    else if ( *(time + index) -48 == 3 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str3[i]);
        }
    } 
    else if ( *(time + index) -48 == 4 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str4[i]);
        }
    } 
    else if ( *(time + index) -48 == 5 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str5[i]);
        }
    } 
    else if ( *(time + index) -48 == 6 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str6[i]);
        }
    } 
    else if ( *(time + index) -48 == 7 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str7[i]);
        }
    } 
    else if ( *(time + index) -48 == 8 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str8[i]);
        }
    } 
    else if ( *(time + index) -48 == 9 ) { 
        for (int i = 0 ; i < 9 ; i++) {
            
            strcat(dest[i], str9[i]);
        }
    }
    else  {
        for (int i = 0; i < 9; i++) {
            
            if ( i == 3 || i == 5) strcat(dest[i], "X");
            else strcat(dest[i], "-");
        }

    }

}


void main(int argc, char *argv[]) {
    
    time_t rawtime;
    struct tm * timeinfo;

    time ( &rawtime );
    timeinfo = localtime ( &rawtime );
    
    char *str = asctime(timeinfo);


    char strFinal[9][100] = {  "\0",
                           "\0",
                           "\0",
                           "\0",
                           "\0",
                           "\0",
                           "\0",
                           "\0",
                           "\0"
                            };


    makeTime(strFinal, str, 11);
    makeTime(strFinal, str, 12);
    makeTime(strFinal, str, 13);
    makeTime(strFinal, str, 14);
    makeTime(strFinal, str, 15);
    
    for (int i = 0;  i<9 ; i++) {
        printf("%s\n", strFinal[i]);
    }

}



