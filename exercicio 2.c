int main (){

    int x;
    int y;
    int *p;
    int *t;


    scanf ("%d", &x);
    scanf ("%d", &y);

    printf ("Atribuindo valores\n

    p = x;
    t = y;

    printf ("%d\n", p);
    printf ("%d\n", t);

    printf ("Invertendo valores\n");

    int aux = t;
    t = p;
    p = aux;

    printf ("%d\n", p);
    printf ("%d\n", t);

    return 0;
}
