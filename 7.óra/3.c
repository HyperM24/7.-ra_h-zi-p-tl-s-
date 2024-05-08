#include <stdio.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} Pont;

double distance(Pont p1, Pont p2)
{
    double dx = p2.x - p1.x;
    double dy = p2.y - p1.y;
    double dist = sqrt(dx*dx + dy*dy);
    return dist;
}

int main()
{
    Pont a = { 1, 2 };
    Pont b = { 6, 5 };

    printf("A ket pont kozti tavolsag: %lf\n", distance(a, b));

    return 0;
}
