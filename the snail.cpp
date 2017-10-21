
#include <stdio.h>
#include <math.h>

int main()
{
    double can_climb_a_day, slide_at_night, heigth_of_well, fatigue, i, j, k, distance_climbed,height_after_climbing,height_after_sliding;

    while(scanf("%lf %lf %lf %lf", &heigth_of_well, &can_climb_a_day, &slide_at_night, &fatigue)==4)
    {
        if(heigth_of_well==0)
            break;
        fatigue=fatigue/100;
        distance_climbed=can_climb_a_day;
        for(i=0, height_after_sliding=0, height_after_climbing=0; ; i++)
        {
            if(distance_climbed<0)              /*ক্লান্ত হয়ে গেলে আর উঠতে পারবেনা , [কিন্তু নিচে পরবেনা ] সে জন্য ০ করা হল*/
                distance_climbed=0;

            height_after_climbing+=distance_climbed;
            height_after_sliding+=(distance_climbed-slide_at_night);

            if(height_after_climbing>heigth_of_well)
            {
                printf("success on day %g\n", i+1);
                break;
            }

            if(height_after_sliding<0)
            {
                printf("failure on day %g\n", i+1);
                break;
            }

            height_after_climbing-=slide_at_night;
            distance_climbed=distance_climbed-(fatigue*can_climb_a_day);
        }
    }
}
