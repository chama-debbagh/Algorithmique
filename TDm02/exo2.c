#include <stdio.h>
//fonction qui remplit un tableau de n réels par des zéros (0.0).
double* raz(double t[], int n){ 
    for (int i ; i<n ; i++ ){
        t[i]=0.0; //remplit les n réels par des zéros (0.0)
        printf("%.1f\n", t[i]);
    }
    return t;
    
}

int main() {
    double t[]= {1.1,2.2,3.3,4.4,5.5};
    int taille = 5;
    raz(t,5);
    return 0;
    
}
