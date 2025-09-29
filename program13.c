#include <stdio.h>
int main(){
    char ch;
    int x;
    float y;
    double z;
    printf("Enter character :");
    scanf(" %c", &ch);
    printf("Enter Integer Number");
    scanf(" %d", &x);
    printf ("Enter Float Value");
    scanf(" %f", &y);
    printf("Enter Double Value");
    scanf(" %lf", &z);
    printf("ch=%ch x=%d y=%f z=%lf",ch,x,y,z);
    return 0;
}
