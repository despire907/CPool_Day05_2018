/*
** EPITECH PROJECT, 2018
** task02
** File description:
** task02
*/

int my_compute_factorial_rec(int nb)
{
    int popo;

    if (nb < 0 || nb > 12)
        return (0);
    if (nb == 0)
        return (1);

    popo = nb * my_compute_factorial_rec(nb - 1);
    return (popo);
}
