#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
    char x;
    char y;

    x = 'a';
    y = 'z';
    
    while (y >= x){
        ft_putchar(y);
        y--;
    }
}

int main(){
    ft_print_reverse_alphabet();
    ft_putchar('\n');
    return(0);
}