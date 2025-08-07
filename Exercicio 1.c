int main (){

    int x = 0;
    int *ptr;

    scanf ("%d", &x);

    ptr = x;

    printf ("%d\n", ptr);
    ptr = x*2 ;
    printf ("%d\n", ptr);
    return 0;
}
