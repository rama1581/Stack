#include "stack.h"

int main()
{
    stack S, P;
    int temp, i;

    createStack_1301223314(S);

    push_1301223314(S, 'I');
    push_1301223314(S, 'F');
    push_1301223314(S, 'L');
    push_1301223314(S, 'A');
    push_1301223314(S, 'B');
    push_1301223314(S, 'J');
    push_1301223314(S, 'A');
    push_1301223314(S, 'Y');
    push_1301223314(S, 'A');


    printInfo_1301223314(S);

    createStack_1301223314(P);

    temp = pop_1301223314(S);
    push_1301223314(P, temp);

    temp = pop_1301223314(S);
    push_1301223314(P, temp);

    temp = pop_1301223314(S);
    push_1301223314(P, temp);

    temp = pop_1301223314(S);
    push_1301223314(P, temp);

    for (i = Top(P); i >= 1; i--) {
        cout << info(P) [i] << " ";
    }
    cout << endl;
}
