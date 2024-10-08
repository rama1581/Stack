#include "stack.h"

void createStack_1301223314(stack &S){
    Top(S) = 0;
}

bool isEmpty_1301223314(stack S){
    if (Top(S) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull_1301223314(stack S) {
    if (Top(S) == 15) {
        return true;
    } else {
        return false;
    }
}

void push_1301223314(stack &S, infotype x){
    if (isFull_1301223314(S)) {
        cout << "Stack Penuh";
    } else {
        Top(S)++;
        info(S) [Top(S) ] = x;
    }
}

int pop_1301223314(stack &S) {
    infotype x;
    x = info(S) [Top(S) ];
    Top(S)--;
    return x;
}

void printInfo_1301223314(stack S) {
    int i;
    for (i = 1; i <= Top(S); i++) {
        cout << info(S) [i] << " ";
    }
    cout << endl;
}
