#include<stdio.h>


struct Node{

    int value;
    Node *next;

    Node(int _value){
        value = _value;
        next = NULL;
    }

    Node(){
        next = NULL;
    }

};

struct List{

    Node *start;
    Node *end;
    int c;

    List(){
        start = NULL;
        end = NULL;
        c = 0;
    }

    bool empty(){
        return start == NULL;
    }

    void pushBack(int value){
        Node *n = new Node(value);
        if (empty()){
            start = n;
            end =n;
            c++;
            return;
        }
        end->next = n;
        end = n;
        c++;
    }

    void print(){

            Node *aux = start;

            while(aux != NULL){
                printf ("%d ->", aux->value);
                aux = aux->next;
            }
    }

    void pushFront(int value){
        Node *n = new Node(value);
        if (empty()){
            start = n;
            end =n;
            c++;
            return;
        }
        n->next = start;
        start = n;
        c++;
    }

    //complexidade alta tempo= o(n)
    //int size (){
    //
      //  int c = 0;
        //Node *aux = start;
        //while(aux!=NULL){
          //  c++;
            //aux= aux->next;
        //}
        //return c;
    //}

    int size(){
        return c;
    }

};

int main(){

        List l;

        l.pushBack(30);
        l.pushBack(50);
        l.pushBack (60);
        l.pushFront(10);
        l.pushFront(5);
        l.print();
        int c = l.size();

        printf ("O tamanho e: %d", c);
        return 0;
}
