#include "common.h"
#include "stack.h"

STACK init_stack()
{
    STACK s;

    s.capacity = INITIAL_STACK_SIZE;
    s.top = 0;
    if (NULL == (s.contents = Malloc(INITIAL_STACK_SIZE, DATA)))
        ERR_MESG("stack: out of memory\n");
    return s;
}

int push(STACK *s, DATA * element)
{
    /* insert code here to increase capacity of s if needed */
    if (s->top == INITIAL_STACK_SIZE) {
        fprintf(stdout, "\nOverflow (stack full, top = %u)\n", s->top);
        return 0;
    }
    s->contents[s->top++] = *element;
    return 1;
}

int pop(STACK *s,DATA *d)
{
    if (s->top == 0) {
        fprintf(stdout, "Underflow (stack empty)\n");
        return 0; /* ideally, should return some invalid element of type DATA */
    }
    s->top--;
    *d = s->contents[s->top];
    return 1;
}

void print_stack(STACK *s)
{
    int i;

    if (s->top == 0) {
        printf("Stack empty\n\n");
        return;
    }
    printf("%25s = %3d -->", "Stack top", s->top);
    for (i = s->top-1; i >= 0; i--)
        printf("%-u\n%35s", s->contents[i], "");
    putchar('\n');
    return;
}

void delete_stack(STACK *s)
{
    free(s);
}
