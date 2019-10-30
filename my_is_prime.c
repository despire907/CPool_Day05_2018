/*
** EPITECH PROJECT, 2018
** task06
** File description:
** task06
*/

int my_is_prime(int nb)
{
    if (nb == 0)
        return (0);
    if (nb == 2)
        return (1);
    if (nb == 3)
        return (1);
    if (nb % 2 == 0)
        return (0);
    if (nb % 3 == 0)
        return (0);
    else {
        return (1);
    }
}
