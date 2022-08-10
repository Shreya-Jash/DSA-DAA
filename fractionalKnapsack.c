#include<stdio.h>
int main()
{
    int m,obj;
    double weight[10];
    double value[10];
    printf("Enter the capacity of knapsack- ");
    scanf("%d",&m);
    printf("Enter the number of items- ");
    scanf("%d",&obj);
    printf("Enter the weight and value of %d items- \n",obj);
    for (int i = 0; i < obj; i++)
    {
        printf("Weight[%d]:",i);
        scanf("%d",&weight[i]);
        printf("Value[%d]:",i);
        scanf("%d",&value[i]);
    }
    int cur_weight=m;
    while (cur_weight>0)
    {
        int item=-1;
        for (int i = 0; i < obj; i++)
        {
            if ((used[i]==0) && ((item==-1) || (value[i]/weight[i] > value[item]/weight[item])))
            {
                item=i;
            }
        }
            used[item]=1;
            cur_weight=cur_weight-weight[item];
            int total_profit=total_profit-value[item];
            if (cur_weight<0)       
            {
                int item_percent=(1+cur_weight/weight[item]*100);
                int total_profit=total_profit-value[item];
                int total_profit += (1 + cur_weight / weight[item]) * value[item];
            }
        
        
    }
    printf("%d",total_profit);
        return 0;
    

}