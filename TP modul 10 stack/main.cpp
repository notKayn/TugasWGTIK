#include <iostream>
#include "stack.h"
using namespace std;

int main(){
    stack S;
    createStack_1301213138(S);

    push_1301213138(S, 'A');
    push_1301213138(S, 'Y');
    push_1301213138(S, 'A');
    push_1301213138(S, 'J');
    push_1301213138(S, 'B');
    push_1301213138(S, 'A');
    push_1301213138(S, 'L');
    push_1301213138(S, 'F');
    push_1301213138(S, 'I');

    printInfo_1301213138(S);
    cout << endl;

    pop_1301213138(S);
    pop_1301213138(S);
    pop_1301213138(S);
    pop_1301213138(S);
    pop_1301213138(S);

    printInfo_1301213138(S);

}
