#ifndef STACK_H
#define STACK_H

#define INITIAL_STACK_SIZE 10

typedef int DATA;
/* Some other possibilities:
 * typedef char *DATA;
 * typedef char[BUF_LEN] DATA;
 */
typedef struct {
    unsigned int capacity, top;
    DATA * contents;
} STACK;


#if 0
extern STACK create_stack(); 
extern void push(STACK *s, DATA d);
extern DATA pop(STACK *s);
#else
extern STACK init_stack();
extern int push(STACK *s, DATA *d); //plane data d will work in push but not in pop
extern int pop(STACK *s, DATA *d);
#endif

extern void print_stack(STACK *s);
extern void delete_stack(STACK *s);

#endif /* STACK_H */
