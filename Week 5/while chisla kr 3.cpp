#include <iostream>
using namespace std;

int main() {
    int a = 0;
    //Типовая задача вывести все числа в диапазоне кратные 3
    scanf("%d", &a);
    int i=0;
    while (i<=a){
        if (i%3==0){
            printf("%d\n",i);
        }
        i++; //эквивалент i=i+1
    }
    
}