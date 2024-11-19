#include <stdio.h> 
void affiche_tab(double t[], int n) {
    for(int i=0;i<n;i++){
        printf("%lf\n", t[i]);
    }
}
int main() {
    double t[]= {1.1,2.2,3.3,4.4,5.5};
    affiche_tab(t,5);
}
