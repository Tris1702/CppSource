#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<math.h>
bool dd[1000006]={};
int prime[100005]={};
void sang()
{
    for(long long i = 2; i <= 1e6; i++)
        if (ifor(long long j = i*i; j <= 1e6; j+=i)
        {}
}
int main()
{
    sang();
	int N, sum = 0;
    scanf("%d",&N);
    for(int n = 0; n < N; n++)
    {
        int so;
        scanf("%d", &so);
        int dem =0;
        for(int i = 2; i <=sqrt(so); i++)
            while (so % i == 0)
            {
                dem += i;
                so/=i;
            }
        if(so > 1) dem += so;
        sum += dem;
    }
    printf("%d", sum);
	return 0;
}