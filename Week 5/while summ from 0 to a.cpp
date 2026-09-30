#include <iostream>
using namespace std;

int main() {
    int a = 0;
    //Типовая задача на поиск суммы элементов от 0 до a
    scanf("%d", &a);
    int sum=0;
    int i=0;
    while (a!=0){
        sum= sum+a;
        a--;//эквивален a=a-1
        i++;
        printf("Iteration - %d, a = %d, sum = %d, a!=0 ? %d \n",i,a,sum, a!=0);
    }
    printf("Summ = %d", sum);
}