#include<stdio.h>

typedef struct{
    int x;
    int y;

    int (*addition)(struct point_t*);
} point_t;

int _addition(point_t *p)
{
    return p->x+p->y;
}

void __constructor(point_t *p,int x,int y)
{
    p->x = x;
    p->y = y;
    p->addition = _addition;
}

void __destructor(void)
{
    printf("Destructor is called ! ~\n");
}

int main(){
    point_t p;

    __constructor(&p,5,5);
    printf("The addition of two nukber => %d\n\n",p.x+p.y);
    __destructor();
}


