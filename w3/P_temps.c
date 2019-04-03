#include <stdio.h>
#define NUMS 3

int main(){
    printf("---=== IPC Temperature Analyzer ===---\n");
    int day, high[NUMS], low[NUMS], ttlhigh=0, ttllow=0;
    float avg;
    
    for(day=0; day<NUMS; day++){
        printf("Enter the high value for day %d:\n", day+1);
        scanf("%d", &high[day]);
        printf("Enter the low value for day %d:\n", day+1);
        scanf("%d", &low[day]);
        while(high[day]<=low[day] || high[day] >=40 || low[day] <= -40){
            printf("Incorrect values, temperatures must be in the range -40 to 40, high must be greater than low.\n");
            printf("Enter the high value for day %d:\n", day+1);
            scanf("%d", &high[day]);
            printf("Enter the low value for day %d:\n", day+1);
            scanf("%d", &low[day]);
        }
        ttlhigh += high[day];
        ttllow += low[day];
    }
    avg = (ttlhigh + ttllow) / NUMS;
    printf("The average (mean) temperature was: %1.2f\n", avg);
    return 0;
}
