#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_alphabet(void)
{
    char x;
    char y;

    x = 'a';
    y = 'z';
    
    while (x <= y){
        ft_putchar(x);
        x++;
    }
}

int main(){
    ft_print_alphabet();
    ft_putchar('\n');
    return(0);
}