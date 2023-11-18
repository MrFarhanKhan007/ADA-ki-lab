#include <stdio.h>
int main()
{
    // knapsack problem using greedy
    int n;
    printf("Enter the number of items: ");
    scanf("%d", &n);

    int weight[n], profit[n];
    printf("Enter the weight and profit of each item: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &profit[i], &weight[i]);
    }

    int capacity;
    printf("Enter the capacity of the knapsack: ");
    scanf("%d", &capacity);

    float profitPerWeight[n];
    for (int i = 0; i < n; i++)
    {
        profitPerWeight[i] = (float)profit[i] / weight[i];
    }

    // sorting the profitPerWeight array in descending order
    for (int i = 0; i < n - 1; i++)
    {
        int max = i;
        for (int j = i + 1; j < n; j++)
        {
            if (profitPerWeight[j] > profitPerWeight[max])
            {
                max = j;
            }
        }
        float temp = profitPerWeight[i];
        profitPerWeight[i] = profitPerWeight[max];
        profitPerWeight[max] = temp;

        int temp1 = weight[i];
        weight[i] = weight[max];
        weight[max] = temp1;

        temp1 = profit[i];
        profit[i] = profit[max];
        profit[max] = temp1;
    }
    
    int currentWeight = 0;
    float finalProfit = 0;
    for (int i = 0; i < n; i++)
    {
        if (currentWeight + weight[i] <= capacity)
        {
            currentWeight += weight[i];
            finalProfit += profit[i];
        }
        else
        {
            int remainingWeight = capacity - currentWeight;
            finalProfit += profitPerWeight[i] * remainingWeight;
            break;
        }
    }
    printf("The maximum profit is: %.2f", finalProfit);
    return 0;
}