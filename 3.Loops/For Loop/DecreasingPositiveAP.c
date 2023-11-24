// Display this AP - 100,97,94,... upto all terms which are positive
/*
#include <stdio.h>
int main()
{
    for (int i = 100; i >= 0; i = i - 3)
    {
        printf("%d\t", i);
    };
    return 0;
}
*/

//Anothercway to do the same question
#include <stdio.h>
int main(){
    int a=100;
    for(int i=1;a>0;i++){
        printf("%d ",a);
        a=a-3;
    };
    return 0;
}