#include <unistd.h>

void ft_print_alphabet(void)
{
    char x;
    char y;
    x = 'a';
    y = 'z';
    while (x <= y){
        write(1, &x, 1);
        x++;
    }
}

int main(){
    ft_print_alphabet();
    return(0);
}