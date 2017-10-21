#include<stdio.h>
typedef struct {
int day,month,year;
char *name;
} birthday;
int compare_function(const void *a,const void *b) {
birthday *x = (birthday *) a;
birthday *y = (birthday *) b;
if (x->month != y->month) // months different
return x->month - y->month; // sort by month
else { // months equal..., try the 2nd field... day
if (x->day != y->day) // days different
return x->day - y->day; // sort by day
else // days equal, try the 3rd field... year
return x->year - y->year; // sort by year
}
}
int main()
{

}
