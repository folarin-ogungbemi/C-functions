#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_numbers(void)
{
    char x;
    char y;

    x = '0';
    y = '9';
    
    while (x <= y){
        ft_putchar(x);
        x++;
    }
}

int main(){
    ft_print_numbers();
    ft_putchar('\n');
    return(0);
}