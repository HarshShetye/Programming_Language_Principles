#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

struct Stack {
    int top;
    char items[MAX][MAX];
};

void push(struct Stack* ps, char* item) {
    if (ps->top == MAX - 1) {
        printf("Stack Overflow!");
        exit(1);
    }
    strcpy(ps->items[++ps->top], item);
}

char* pop(struct Stack* ps) {
    if (ps->top == -1) {
        printf("Stack Underflow!");
        exit(1);
    }
    return ps->items[ps->top--];
}

int isOperand(char ch) {
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

void prefixToPostfix(char* prefix) {
    struct Stack stack;
    stack.top = -1;
    int length = strlen(prefix);
    for (int i = length - 1; i >= 0; i--) {
        char ch = prefix[i];
        if (isOperand(ch)) {
            char operand[2];
            operand[0] = ch;
            operand[1] = '\0';
            push(&stack, operand);
        } else {
            char* op1 = pop(&stack);
            char* op2 = pop(&stack);
            char postfix[MAX];
            sprintf(postfix, "%s%s%c", op1, op2, ch);
            push(&stack, postfix);
        }
    }
    printf("Postfix: %s", stack.items[stack.top]);
}

int main() {
    char prefix[MAX];
    printf("Enter the prefix expression: ");
    scanf("%s", prefix);
    prefixToPostfix(prefix);
    return 0;
}
