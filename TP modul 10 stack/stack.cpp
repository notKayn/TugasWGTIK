#include "stack.h"

void createStack_1301213138(stack &S){
    Top(S) = 0;
};

bool isEmpty_1301213138(stack S){
    if (Top(S) == 0){
        return true;
    } else {
        return false;
    }
};

bool isFull_1301213138(stack S){
    if (Top(S) == 15){
        return true;
    } else {
        return false;
    }
};

void push_1301213138(stack &S, infotype x){
    if (isFull_1301213138(S) == false){
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
};

int pop_1301213138(stack &S){
    infotype x;

    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
};

void printInfo_1301213138(stack S){
    int i;

    for (i = Top(S); i >= 1; i--){
        cout << info(S)[i];
    }
};
