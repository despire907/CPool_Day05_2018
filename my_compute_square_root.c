/*
** EPITECH PROJECT, 2018
** task05
** File description:
** task05
*/

int my_compute_square_root(int nb)
{
    int popo = 1;

    if (nb == 0)
        return (0);

    while (popo * popo != nb) {
        if (popo * popo < nb && nb < (popo + 1) * (popo + 1)) {
            return (0);
        }
        popo++;
    }
    return (popo);
}
