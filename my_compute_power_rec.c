/*
** EPITECH PROJECT, 2018
** task04
** File description:
** task04
*/

int my_compute_power_rec(int nb, int p)
{
    int popo;

    if (p == 1 )
        return (nb);
    if (p == 0)
        return (1);
    else {
        nb = my_compute_power_rec(nb, p - 1) * nb;
    }
    return (nb);
}
