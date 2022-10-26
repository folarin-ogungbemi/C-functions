#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_print_comb(void)
{
    char x;
    char y;
    char z;

    x = '0';
    while (x <= '7')
    {
        y = x + 1;
        while (y <= '8')
        {
            z = y + 1;
            while (z <= '9')
            {
                ft_putchar(x);
                ft_putchar(y);
                ft_putchar(z);
                if (x < '7')
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                z++;
            }
            y++;
        }
        x++;
    }
}

int main(){
    ft_print_comb();
    ft_putchar('\n');
    return(0);
}