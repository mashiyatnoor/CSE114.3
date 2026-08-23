#include <stdio.h>
float start_point,end_point,total_area;
int n;
void input (void){
    printf ("\n Enter lower limit:");
    scanf ("%f", &start_point);
    printf ("Enter upper limit:");
    scanf ("%f", &end_point);
    printf ("Enter number of trapezoids:");
    scanf ("%d", &n);
}
float trap_area (float height_1, float height_2, float base){
    float area;
    area = 0.5 * (height_1 + height_2) * base;
    return (area);
}
float function_x (float x){
    return (x * x + 1);
}
float find_area (float a, float b, int n){
    float base, lower, h1, h2;
    base = (b-a) / n;
    lower = a;
    for (lower = a; lower <= b- base; lower = lower + base)
    {
        h1 =function_x (lower);
        h2 =function_x (lower + base);
        total_area += trap_area (h1, h2, base);
    }
    return (total_area);
}
int main (){
    printf ("AREA UNDER A CURVE");
    input ();
    total_area = find_area (start_point, end_point, n);
    printf ("TOTAL AREA = %f", total_area);
}
