#include<stdio.h>
#include<stdlib.h>
void fun2()
{
    printf("start programer\n");

}

void fun3()
{
    printf("it is stack performance\n");
    printf("programe center\\n ");
    
}
void fun4()
{
    printf("\n \tlearn more create your image\n ");
}

void fun1()
{
    printf("fun1 line 1\n");
    fun2();
    printf("fun1 line 2\n");
}

int main()
{   fun2();
    printf("main line 1\n");
    fun1();
    printf("main line 2\n");
    
    fun3();
    fun2();
    printf("\tend of programe\n\t");
    fun4();
    printf("by");
}
